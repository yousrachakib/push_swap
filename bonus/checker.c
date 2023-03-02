/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:48:00 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 22:40:55 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	my_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void    apply_one_action(t_list **stack_a, t_list **stack_b, char *action)
{
	if (my_strcmp(action, "pa\n") == 0)
		push(stack_a, stack_b, 1, 3);
	else if (my_strcmp(action, "pa\n") == 0)
		push(stack_a, stack_b, 0, 3);
	else if (my_strcmp(action, "ra\n") == 0)
		rotate_stack(stack_a, 3);
	else if (my_strcmp(action, "rb\n") == 0)
		rotate_stack(stack_b, 3);
	else if (my_strcmp(action, "rr\n") == 0)
		rr(stack_a, stack_b, 0);
	else if (my_strcmp(action, "rra\n") == 0)
		rrotate_stack(stack_a, 3);
	else if (my_strcmp(action, "rrb\n") == 0)
		rrotate_stack(stack_b, 3);
	else if (my_strcmp(action, "rrr\n") == 0)
		rrr(stack_a, stack_b, 0);
	else if (my_strcmp(action, "sa\n") == 0)
		swap_2top_numbers(*stack_a, 3);
	else if (my_strcmp(action, "sb\n") == 0)
		swap_2top_numbers(*stack_b, 3);
	else if (my_strcmp(action, "ss\n") == 0)
		ss(*stack_a, *stack_b, 3);
	else
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
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

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;
	char	*action;

	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		exit (0);
	str = my_joint(ac, av, " ");
	parcing(str, &stack_a);
	action = get_next_line(0);
	while (action)
	{
		apply_one_action(&stack_a, &stack_b, action);
		action = get_next_line(0);
	}
	if (stack_storted(stack_a) == 1 && stack_b == NULL)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}
