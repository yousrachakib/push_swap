/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:48:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/08 19:13:12 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	check_and_aplly(t_list	*stack_a, t_list	*stack_b)
{
	int	size;

	size = list_size(stack_a);
	if (size == 2)
	{
		if (stack_a->data > stack_a->next->data)
			swap_2top_numbers(stack_a, 0);
	}
	else if (size == 3)
		sort_3numbers(&stack_a);
	else if (size >= 4 && size <= 30)
		sort_5numbers(&stack_a, &stack_b);
	else if (size >= 31 && size <= 210)
		sort_100numbers(&stack_a, &stack_b, size);
	else
		sort_500numbers(&stack_a, &stack_b, size);
	free_stack(stack_a);
	free_stack(stack_b);
}
