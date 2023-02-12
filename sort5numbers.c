/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:17:27 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/12 22:59:00 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5numbers(t_list **stack_a, t_list **stack_b)
{	
	
	while (list_size(*stack_a) != 3)
	{
		*stack_a = (*stack_a)->next;
		if (get_position(&stack_a, return_minvalue(*stack_a)) > (list_size(stack_a) / 2))
			rrotate_stack(stack_a, 1);
		else
			rotate_stack(stack_a, 1);
		

	}
}

int get_position(t_list  **stack,int	data)
{
	int index;

	index = 0;
	while ((*stack)->data != data)
	{
		index++;
		*stack = (*stack)->next;
	}
	return (index);
} 