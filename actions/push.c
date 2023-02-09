/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:08:50 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/09 18:57:01 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **stack_a, t_list **stack_b, int a)
{
	t_list	*temp;

	if (a == 1)
	{
		if (!*stack_a)
			return ;
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		addfront_node(stack_b, temp);
		free(temp);
		ft_putstr_fd("pb\n", 1);
	}
	else
	{
		if (!*stack_b)
			return ;
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		addfront_node(stack_a, temp);
		free(temp);
		ft_putstr_fd("pa\n", 1);
	}	
}
