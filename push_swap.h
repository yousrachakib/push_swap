/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:01:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/02/09 18:46:52 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

// linkedlist functions
typedef struct t_list
{
	int data;
	struct t_list *next;
}	t_list;

// actions
void	rrr(t_list **stack_a, t_list	**stack_b);
void	rrotate_stack(t_list **stack, int a);
void	swap_2top_numbers(t_list *stack, int a);
void	ss(t_list *stack_a, t_list *stack_b);
void	rr(t_list **stack_a, t_list	**stack_b);
void	rotate_stack(t_list	**stack, int a);
void	push(t_list **stack_a, t_list **stack_b, int a);
// linked list
t_list	*last_node(t_list	*stack);
void	addback_node(t_list **head,t_list *newnode);
void 	addfront_node(t_list **head, t_list *newnode);
t_list *creat_node(t_list *node, int data);
//parcing functions
void	ft_putstr_fd(char *str, int fd);
int over_int(char **str);
int	my_isdigit(int c);
char	**my_split(char const *s, char c);
size_t my_strlen(const char* str);
char	*my_strcat(char* dest, const char* src);
int    ft_total_len(char **strs, char *sep, int size);
char *my_joint(int size, char **str, char *sep);
int	is_integer(char *str);
int	my_isdigit(int c);
long	ft_atoi(const char *str);

#endif