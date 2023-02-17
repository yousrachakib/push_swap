/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:40:37 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/17 19:27:58 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100numbers(t_list	**stack_a, t_list	**stack_b)
{
	int chunk;
	int nextchunk;
	int i;

	i = 0;
	chunk = list_size(*stack_a);
	nextchunk = chunk;

	while (*stack_a)
	{
		while ((*stack_a) != NULL && (*stack_a)->index <= chunk)
		{
			push(stack_a, stack_b, 1);
			i++;
			if (i > chunk)
				chunk += nextchunk;
		}
		rotate_stack(stack_a, 1);
	}
}
