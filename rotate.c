/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:05:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/02 00:24:18 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_list	**stack, int a)
{
	t_list	*head;
	t_list	*temp;

	if (!*stack || (*stack)->next == NULL)
		return ;
	head = *stack;
	temp = *stack;
	*stack = (*stack)->next;
	last_node(temp)->next = head;
	head->next = NULL;
	if (a == 0)
		ft_putstr_fd("rb\n", 1);
	if (a == 1)
		ft_putstr_fd("ra\n", 1);
}

void	rr(t_list **stack_a, t_list	**stack_b)
{
	rotate_stack(stack_a, 3);
	rotate_stack(stack_b, 3);
	ft_putstr_fd("rr\n", 1);
}

void	rrotate_stack(t_list **stack, int a)
{
	t_list	*head;
	t_list	*temp;

	temp = *stack;
	if (!*stack || (*stack)->next == NULL)
		return ;
	head = last_node(temp);
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;

	addfront_node(stack, head);
	if (a == 0)
		ft_putstr_fd("rrb\n", 1);
	if (a == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrr(t_list **stack_a, t_list	**stack_b)
{
	rrotate_stack(stack_a, 3);
	rrotate_stack(stack_b, 3);
	ft_putstr_fd("rrr\n", 1);
}

int	stack_storted(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = stack;
	while (tmp)
	{
		tmp1 = tmp->next;
		while (tmp1)
		{
			if (tmp->data > tmp1->data)
				return (0);
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
	return (1);
}