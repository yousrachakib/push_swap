/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:42:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/07 19:27:49 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_2top_numbers(t_list *stack,int a)
{
	int	tmp;
	
	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
	if ( a == 1)
		ft_putstr_fd("sa\n", 1);
	else
		ft_putstr_fd("sb\n", 1);
}

void ss(t_list *stack_a, t_list *stack_b)
{
	swap_2top_numbers(stack_a, 1);
	swap_2top_numbers(stack_b, 0);
	ft_putstr_fd("ss\n", 1);
}