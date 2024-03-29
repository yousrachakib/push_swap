/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:26:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/14 21:28:45 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	over_long(char	*str)
{
	if (my_strlen(str) >= my_strlen("+9223372036854775807"))
	{
		ft_putstr_fd("Error", 2);
		exit (1);
	}	
}

int	my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	over_int(char **str)
{
	int		i;
	long	j;

	i = 0;
	while (str[i])
	{
		j = ft_atoi(str[i]);
		if (j <= INT_MIN || j >= INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

int	is_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (*str == '-' || *str == '+')
			str++;
		if (!my_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(char *str)
{
	long	i;
	long	sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	skip_zeroes(str);
	over_long(str);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+' || str[i] == '-' )
		&& (str[i + 1] == '+' || str[i + 1] == '-' ))
		return (0);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && my_isdigit(str[i]))
		res = res * 10 + (str[i++] - 48);
	return (res * sign);
}
