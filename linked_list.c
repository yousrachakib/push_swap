/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:54:32 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/07 17:58:44 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_list	*stack)
{
	int counter;

	counter = 0;
	while(!stack)
	{
		counter++;
		stack = stack->next;
	}
	return (counter);
}

t_list *last_node(t_list	*stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_list *creat_node(t_list *node, int data)
{
	node = malloc(sizeof(t_list));
	if (!node)
		return(NULL);
	node->data= data;
	node->next = NULL;
	return (node);	
}

void addback_node(t_list **head,t_list *newnode)
{
	t_list *temp; 
	temp = *head;
	if (!*head)
	{
		*head = newnode;
		return ;	
	}
	last_node(temp)->next = newnode;
}

void addfront_node(t_list **head, t_list *newnode)
{
	if (!*head)
		*head = newnode;
	newnode->next = *head;
}