/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:58:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/07 17:56:04 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	duplicate(char **split)
{
	int i = 0;
	int j ;
	while (split[i] != NULL)
		i++;
	int *array = malloc(sizeof(int)* i);
	i = 0;
	while (split[i])
	{
	 array[i] = ft_atoi(split[i]);
	 i++;
	}
	int len = i;
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
	i++;
	}
	return (1);
}

void	parcing(char *join, t_list **mystack)
{
	t_list *node;
	char **split;
	int i;
	int j;
	
	split = my_split(join, ' ');
	i = 0;
	while (split[i]!= NULL)
	{
		if (is_integer(split[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (over_int(split) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
	if (duplicate(split) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	i = 0;
	while (split[i] != NULL)
	{
		node = creat_node(node,ft_atoi(split[i]));
		addback_node(mystack,node);
		i++;
	}
}
int main(int ac, char **av)
{
	t_list *stack_a;
	char *str;
	char **split;
	if (ac == 1)
		exit (0);
	str = my_joint(ac,av," ");
	stack_a = NULL;
	parcing(str, &stack_a);
	while (stack_a)
	{	
		printf("%d\n", stack_a->data); // USE PUTSTR
		stack_a= stack_a->next;
	}
}