/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:08:50 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 22:41:55 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	push(t_list **stack_a, t_list **stack_b, int a,int flag)
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
		if (flag == 1)
			ft_putstr_fd("pb\n", 1);
	}
	else if (a == 0)
	{
		if (!*stack_b)
			return ;
		head = *stack_b;
		temp = (*stack_b)->data;
		*stack_b = (*stack_b)->next;
		addfront_node(stack_a, creat_node(temp));
		free(head);
		if (flag == 2)
			ft_putstr_fd("pa\n", 1);
	}	
}
