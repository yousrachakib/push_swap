/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:40:37 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/13 21:26:28 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100numbers(t_list	**stack_a, t_list	**stack_b)
{
	int min;
	int pos;
	
	while(*stack_a)
	{
		min = return_minvalue(*stack_a);
		pos = get_position(*stack_a, min);
		while((*stack_a)->data != min)
		{
			if (pos > (list_size(*stack_a) / 2))
				rrotate_stack(stack_a, 1);
			else
				rotate_stack(stack_a, 1);
		}
		push(stack_a, stack_b, 1);
	}
	while (*stack_b != NULL)
		push(stack_a, stack_b, 0);
}

