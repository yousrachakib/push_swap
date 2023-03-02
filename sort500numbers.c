/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:58:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/02 01:31:13 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back_to_a(t_list	**stack_b, t_list	**stack_a)
{
	int	pos;
	int	max;

	while (list_size(*stack_b))
	{
		max = return_maxvalue(*stack_b);
		pos = get_position(*stack_b, max);
		while ((*stack_b)->data != max)
		{
			if (pos > (list_size(*stack_b) / 2))
				rrotate_stack(stack_b, 0);
			else
				rotate_stack(stack_b, 0);
		}
		push(stack_a, stack_b, 0);
	}
}

void	sort_500numbers(t_list	**stack_a, t_list	**stack_b, int size)
{
	int	chunk;
	int	nextchunk;
	int	i;

	i = 1;
	chunk = size / 10;
	nextchunk = chunk;

	while (*stack_a)
	{
		while ((*stack_a) != NULL && (*stack_a)->index > chunk)
			rotate_stack(stack_a, 1);
		i++;
		if ((*stack_a)->index > (chunk - (nextchunk / 2)))
			push(stack_a, stack_b, 1);
		else if ((*stack_a)->index <= (chunk - (nextchunk / 2)))
		{
			push(stack_a, stack_b, 1);
			if ((*stack_a) != NULL && (*stack_a)->index > chunk)
				rr(stack_a, stack_b);
			else
				rotate_stack(stack_b, 0);
		}
		if (i == chunk)
			chunk += nextchunk;
	}
	push_back_to_a(stack_b, stack_a);
}
