/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:40:37 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/02 01:28:03 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100numbers(t_list	**stack_a, t_list	**stack_b, int size)
{
	int	chunk;
	int	nextchunk;
	int	i;

	i = 0;
	chunk = size / 5;
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
