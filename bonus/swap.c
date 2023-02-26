/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:42:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/26 22:31:46 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	swap_2top_numbers(t_list *stack, int a)
{
	int	tmp;
	
	if (!stack || stack->next == NULL)
		return ;	
	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
	if (a == 0)
		ft_putstr_fd("sa\n", 1);
	if (a == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_list *stack_a, t_list *stack_b, int flag)
{
	swap_2top_numbers(stack_a, 3);
	swap_2top_numbers(stack_b, 3);
	if (flag == 1)
		ft_putstr_fd("ss\n", 1);
}
