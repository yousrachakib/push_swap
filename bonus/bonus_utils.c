/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:04:43 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 01:28:43 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_list	*last_node(t_list	*stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	addback_node(t_list **head, t_list *newnode)
{
	t_list	*temp;

	temp = *head;
	if (!*head)
	{
		*head = newnode;
		return ;
	}
	last_node(temp)->next = newnode;
}

void	addfront_node(t_list **head, t_list *newnode)
{
	t_list	*temp;

	temp = *head;
	if (!*head)
	{
		*head = newnode;
		newnode->next = NULL;
		return ;
	}
	newnode->next = temp;
	*head = newnode;
}

t_list	*creat_node(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}