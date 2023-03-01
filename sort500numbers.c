/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:58:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 19:28:26 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_list	**stack_b, t_list	**stack_a)
{
	int	pos;

	pos = get_position(*stack_b, return_maxvalue(*stack_b));
	while (list_size(*stack_b))
	{
		while ((*stack_b)->data != return_maxvalue(*stack_b))
		{
			if (pos > (list_size(*stack_b) / 2))
				rrotate_stack(stack_b, 0);
			else
				rotate_stack(stack_b, 0);
		}
		push(stack_a, stack_b, 0);
	}
}

void	sort_500numbers(t_list	**stack_a, t_list	**stack_b)
{
	int	chunk;
	int	nextchunk;
	int	i;

	i = 1;
	chunk = list_size(*stack_a) / 10;
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
	push_back(stack_b, stack_a);
}
