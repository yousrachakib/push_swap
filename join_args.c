/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:21:52 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/14 21:28:08 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	my_strlen(char	*str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*my_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	j;

	i = my_strlen(dest);
	j = -1;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

int	isempty(int size, char **str)
{
	int		i;
	size_t	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
				break ;
			j++;
		}
		if (j == my_strlen(str[i]))
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
	return (1);
}

int	ft_total_len(char **str, char *sep, int size)
{
	int	len;
	int	i;

	i = 1;
	len = (size - 2) * my_strlen(sep);
	while (i < size)
	{
		len = len + my_strlen(str[i]);
		i++;
	}
	return (len);
}

char	*my_joint(int size, char **str, char *sep)
{
	int		i;
	size_t	len;
	char	*result;

	i = 1;
	isempty(size, str);
	len = ft_total_len(str, sep, size);
	result = malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		my_strcat(result, str[i]);
		if (i < size - 1)
			my_strcat(result, sep);
		i++;
	}
	result[len] = 0;
	return (result);
}
