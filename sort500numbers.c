/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:58:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/23 17:20:08 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	check_befor_maxpos(t_list	*stack)
// {
// 	int	b_max;
// 	int max;
// 	int size;
	
// 	size = list_size(stack);
// 	b_max = before_max(stack);
// 	max = return_maxvalue(stack);
// 	while(stack)
// 	{
// 		if (get_position(stack,b_max) < get_position(stack, max) && 
// 			(get_position(stack, b_max ) < (size / 2) ))
// 		{
// 			printf("%d ======> size :", size / 2);
// 			return (1);	
// 		}
// 		else if (get_position(stack,b_max) > get_position(stack, max) && 
// 				(get_position(stack, b_max) > (list_size(stack) / 2)))
// 			return (2);
// 		stack = stack->next;
// 	}
// 	return (0);
// }