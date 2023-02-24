/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:17:27 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/24 16:57:21 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5numbers(t_list **stack_a, t_list **stack_b)
{
	int pos;
	int min;
	
	while(list_size(*stack_a) > 3)
	{
		min = return_minvalue(*stack_a) ;
		pos = get_position(*stack_a, min);
		while ((*stack_a)->data != min )
		{
			if (pos > (list_size(*stack_a) / 2))
				rrotate_stack(stack_a, 1);
			else
				rotate_stack(stack_a, 1);
		}
		push(stack_a, stack_b, 1);
	}
	sort_3numbers(stack_a);
	while (*stack_b != NULL)
		push(stack_a, stack_b, 0);
}

int get_position(t_list  *stack,int	num)
{
	int index;

	index = 0;
	while (stack->data != num)
	{
		index++;
		stack = stack->next;
	}
	return (index);
} 