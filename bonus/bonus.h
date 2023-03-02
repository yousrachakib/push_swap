/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:54:47 by yochakib          #+#    #+#             */
/*   Updated: 2023/03/01 22:35:32 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 5
# endif

// linkedlist functions
typedef struct t_list
{
	int				index;
	int				data;
	struct t_list	*next;
}	t_list;

void	skip_zeroes(char	*str);
char	**my_split(char const *s, char c);
t_list	*creat_node(int data);
void	ft_putstr_fd(char *str, int fd);
void	addfront_node(t_list **head, t_list *newnode);
int		over_int(char **str);
int		is_integer(char *str);
long	ft_atoi(const char *str);
size_t	my_strlen(const char*str);
char	*my_strcat(char *dest, const char *src);
int		isempty(int size, char **str);
int		ft_total_len(char **str, char *sep, int size);
char	*my_joint(int size, char **str, char *sep);
int		duplicate(char **split);
void	parcing(char *join, t_list **mystack);
int		my_isdigit(int c);
int		detect_newline(char *s);
void	over_long(char	*str);
char	*ft_line(char *res);
char	*new_res(char *res);
char	*ft_read(int fd, char *res);
char	*get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
void	push(t_list **stack_a, t_list **stack_b, int a, int flag);
void	rotate_stack(t_list	**stack, int a);
void	rr(t_list **stack_a, t_list	**stack_b, int flag);
void	rrotate_stack(t_list **stack, int a);
void	rrr(t_list **stack_a, t_list	**stack_b, int flag);
t_list	*last_node(t_list	*stack);
void	addback_node(t_list **head, t_list *newnode);
void	ss(t_list *stack_a, t_list *stack_b, int flag);
void	swap_2top_numbers(t_list *stack, int a);

#endif