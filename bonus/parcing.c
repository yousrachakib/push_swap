/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:58:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/07 17:00:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	duplicate(char **split)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (split[++i] != NULL)
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
