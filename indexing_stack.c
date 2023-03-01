/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:43:09 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 19:03:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	return_min_index(t_list	*stack)
{
	t_list	*temp;
	t_list	*temp1;
	int		value;

	temp1 = stack;
	temp = stack;

	while (temp1)
	{
		if (temp1->index == -1)
		{
			value = temp1->data;
			break ;
		}
		temp1 = temp1->next;
	}

	while (temp)
	{
		if (temp->data < value && temp->index == -1)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

void	reset_index(t_list	*stack)
{
	int	index;

	index = -1;
	while (stack)
	{
		stack->index = index;
		stack = stack->next;
	}
}

void	add_index_to_node(t_list	*stack)
{
	int		index;
	int		size;
	t_list	*temp;

	index = 0;
	reset_index(stack);
	size = list_size(stack);
	while (size != 0)
	{
		temp = stack;
		while (temp != NULL)
		{
			if (temp->data == return_min_index(stack))
			{
				temp->index = index;
				index++;
				size--;
				break ;
			}
			temp = temp->next;
		}
	}
}
