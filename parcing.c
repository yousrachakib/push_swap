/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:58:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/27 21:06:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate(char **split)
{
	int	i;
	int	j;
	int	*array;
	int	len;

	i = -1;
	while (split[++i] != NULL)
	array = malloc(sizeof(int) * i);
	i = -1;
	while (split[++i])
		array[i] = ft_atoi(split[i]);
	len = i;
	i = -1;
	while (++i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
	}
	return (1);
}
// void leak()
// {
// 	system("leaks push_swap");
// }
void	parcing(char *join, t_list **mystack)
{
	t_list	*node;
	char	**split;
	int		i;

	split = my_split(join, ' ');
	free (join);
	i = -1;
	while (split[++i] != NULL)
	{
		if (is_integer(split[i]) == 0 || over_int(split) == 0
			|| duplicate(split) == 0)
		{
			_free(split);
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
	_free(split);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list *stack_b;
	char	*str;

	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		exit (0);
	str = my_joint(ac, av, " ");
	parcing(str, &stack_a);
	add_index_to_node(stack_a);
	if (list_size(stack_a) < 3)
		
	sort_100numbers(&stack_a, &stack_b);
	// while (stack_a)
	// {	
	// 	printf("%d\n", stack_a->data);
	// 	stack_a = stack_a->next;
	// }
	// printf("//////////////////\n");
	// while (stack_b)
	// {	
	// 	printf("%d\n", stack_b->data);
	// 	stack_b = stack_b->next;
	// }
		// atexit(leak);

	
 }
