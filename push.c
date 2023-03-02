/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:08:50 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 21:36:40 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_a, t_list **stack_b, int a)
{
	int		temp;
	t_list	*head;


	if (a == 1)
	{
		if (!*stack_a)
			return ;
		head = *stack_a;
		temp = (*stack_a)->data;
		*stack_a = (*stack_a)->next;
		addfront_node(stack_b, creat_node(temp));
		free(head);
		ft_putstr_fd("pb\n", 1);
	}
	else
	{
		if (!*stack_b)
			return ;
		head = *stack_b;
		temp = (*stack_b)->data;
		*stack_b = (*stack_b)->next;
		addfront_node(stack_a, creat_node(temp));
		free(head);
		ft_putstr_fd("pa\n", 1);
	}	
}
