/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:58:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/14 21:40:18 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate(char **split)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (split[++i] != NULL)
		;
	len = i;
	i = -1;
	while (++i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(split[i]) == ft_atoi(split[j]))
				return (0);
			j++;
		}
	}
	return (1);
}

void	parcing(char *join, t_list **mystack)
{
	t_list	*node;
	char	**split;
	int		i;

	split = my_split(join, ' ');
	i = -1;
	while (split[++i] != NULL)
	{
		if (is_integer(split[i]) == 0 || over_int(split) == 0
			|| duplicate(split) == 0)
		{
			split_free(split);
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
	}
	i = -1;
	while (split[++i] != NULL)
	{
		node = creat_node(ft_atoi(split[i]));
		addback_node(mystack, node);
	}
	split_free(split);
}

void	free_stack(t_list	*stack)
{
	t_list	*temp;
	t_list	*head;

	head = stack;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;

	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		exit (0);
	str = my_joint(ac, av, " ");
	parcing(str, &stack_a);
	free(str);
	add_index_to_node(stack_a);
	if (stack_storted(stack_a) == 1)
		exit (0);
	check_and_aplly(stack_a, stack_b);
	return (0);
}
