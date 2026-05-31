/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:24:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 19:08:56 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H
# include <stdlib.h>
# include <unistd.h>

// STRUCTS

typedef struct t_list
{
	int				num;
	struct t_list	*next;
	struct t_list	*prev;
}					t_list;

typedef struct t_stack
{
	t_list			*head;
	t_list			*tail;
	float			disorder;
	int				size;
}					t_stack;

// Error messages

void				node_error(void);
void				not_all_digits_error(void);
void				insert_node_fail(void);
void				invalid_cmd_argument(void);

// Checkers

// Utils

int					ft_atoi(const char *nptr);
size_t				ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_isspace(unsigned char c);
char				**ft_split(char const *s, char c);
int ft_putstr(char *str);
void    ft_putdisorder(float num, int precision);
void ft_putnbr(int n);

// List management

void				clear_list(t_stack *stack);
t_list				*ft_new_node(int num);
int					ft_insert_new_node(t_stack *stack, t_list *new_node);
int					create_list(char **argv, t_stack *stack);
void				print_node_value(t_stack *stack);

// Operations

void				swap_first_elements(t_stack *stack);

// Cmd management

int					list_from_argv(char **argv, t_stack *stack);
int					check_command_line(char **argv);

// Stack management

void    init_stack(t_stack *stack);
float	calculate_disorder(t_stack *stack);
int     repetition_found(t_stack *stack);
#endif