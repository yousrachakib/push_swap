/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:58:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/24 21:55:26 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_befor_maxpos(t_list	*stack)
{
	int	b_max;
    int pos_bmax;
    int pos_max;
	int max;
	int size;
	
    
	size = list_size(stack);
	b_max = before_max(stack);
	max = return_maxvalue(stack);
    pos_bmax = get_position(stack,b_max);
    pos_max = get_position(stack, max);
	// while(stack)
	// {
    if ( pos_bmax < pos_max &&  pos_bmax <= (size / 2) && pos_max <= (size / 2))
        return (1);	
    else if (pos_bmax > pos_max &&  pos_bmax >= (size / 2) && pos_max >= (size / 2))
        return (2);
	// 	stack = stack->next;
	// }
	return (0);
}

void	sort_500numbers(t_list	**stack_a, t_list	**stack_b)
{
	int chunk;
	int nextchunk;
	int i;

	i = 1;
	chunk = list_size(*stack_a) / 9;
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
	while(list_size(*stack_b))
	{
		while ((*stack_b)->data != return_maxvalue(*stack_b))
		{
			if (get_position(*stack_b,return_maxvalue(*stack_b)) > (list_size(*stack_b) / 2))
				rrotate_stack(stack_b, 0);
			else
				rotate_stack(stack_b, 0);
		}
		push(stack_a, stack_b, 0);
	}
}
