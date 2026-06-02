/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:24:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 19:54:40 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H
# include <limits.h>
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

typedef struct t_ops
{
	char			*strategy;
	int				total_operations;
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
}					t_ops;

// Error messages

void				node_error(void);
void				not_all_digits_error(void);
void				insert_node_fail(void);
void				invalid_cmd_argument(void);
void				error_message(void);
void				fail_clear_list(void);
void				error_repetition_found(void);

// Utils

long				ft_atol(const char *nptr);
size_t				ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_isspace(unsigned char c);
char				**ft_split(char const *s, char c);
int					ft_putstr(char *str);
void				ft_putdisorder(float num, int precision);
void				ft_putnbr(int n);

// List management

void				clear_list(t_stack *stack);
t_list				*ft_new_node(int num);
int					ft_add_back(t_stack *stack, t_list *new_node);
int	ft_add_front(t_stack *stack, t_list *new_node);
int					create_list(char **argv, t_stack *stack);
void				print_node_value(t_stack *stack);
t_list				*extract_first(t_stack *stack);

// Operations

void				swap_first_elements(t_stack *stack);
void				simultaneous_swap(t_stack *stack1, t_stack *stack2);
void				push_element(t_stack *stack_to_push,
						t_stack *stack_to_extract);
void	rotate_elements(t_stack *stack);
void	rotate_simultaneous(t_stack *stack_1, t_stack *stack_2);
void	rotate_reverse(t_stack *stack);
void	rotate_reverse_simultaneous(t_stack *stack_1, t_stack *stack_2);

// Cmd management

int					list_from_argv(char **argv, t_stack *stack);
int					check_command_line(char **argv, int argc);

// Stack management

void				init_stack(t_stack *stack_1, t_stack *stack_2);
int				calculate_disorder(t_stack *stack);
int					repetition_found(t_stack *stack);

// Selection Sort

int	look_for_max_position(t_stack *stack, int max);
int	look_for_max(t_stack *stack);

// Tests
void	test_initial_values(t_stack *stack);
void	test_operations(t_stack *stack_a, t_stack *stack_b);
#endif