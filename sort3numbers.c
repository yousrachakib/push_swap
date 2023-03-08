/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:51:05 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/08 12:04:50 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3numbers(t_list **stack)
{
	t_list	*head;

	head = *stack;

	if (head->next->data == return_minvalue(*stack)
		&& head->next->next->data == return_maxvalue(*stack))
		swap_2top_numbers(*stack, 0);
	else if (head->data == return_maxvalue(*stack)
		&& head->next->next->data == return_minvalue(*stack))
	{
		swap_2top_numbers(*stack, 0);
		rrotate_stack(stack, 1);
	}
	else if (head->data == return_maxvalue(*stack)
		&& head->next->data == return_minvalue(*stack))
		rotate_stack(stack, 1);
	else if (head->data == return_minvalue(*stack)
		&& head->next->data == return_maxvalue(*stack))
	{
		swap_2top_numbers(*stack, 0);
		rotate_stack(stack, 1);
	}
	else if (head->next->data == return_maxvalue(*stack)
		&& head->next->next->data == return_minvalue(*stack))
		rrotate_stack(stack, 1);
	return ;
}
