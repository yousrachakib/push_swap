/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:58:44 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/23 15:41:21 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	return_maxvalue(t_list	*stack)
{
	t_list	*temp;
	int		value;
	
	value = stack->data;
	temp = stack; 
	while(temp)
	{
		if (temp->data > value)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}
int	return_minvalue(t_list	*stack)
{
	t_list	*temp;
	int		value;
	
	value = stack->data;
	temp = stack; 
	while(temp)
	{
		if (temp->data < value)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

int before_max(t_list	*stack)
{
	t_list	*temp;
	int		value;
	
	value = stack->data;
	temp = stack;
	while (temp)
	{
		if (temp->data > value && temp->data != return_maxvalue(stack))
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}