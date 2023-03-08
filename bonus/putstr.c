/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:48:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/07 17:49:01 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
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
