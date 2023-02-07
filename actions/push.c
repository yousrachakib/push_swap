/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:08:50 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/06 17:33:15 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_list **stack_a,t_list **stack_b, int a)
{
	t_list *temp;
	
	if ( a == 1)
	{
		addfront_node(stack_b, *stack_a);
		 temp = *stack_a;
		 *stack_a = (*stack_a)->next;
		 free(temp);
	}
	else
	{
		addfront_node(stack_a, *stack_b);
		 temp = *stack_b;
		 *stack_b = (*stack_b)->next;
		 free(temp);
	}	
	
}

