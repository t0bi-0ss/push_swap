/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:24:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:21 by ilbozhek         ###   ########.fr       */
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
	int				index;
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
	int				strategy;
	int				bench;
	int				adaptative;
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

// Utils

long				ft_atol(const char *nptr);
size_t				ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_isspace(unsigned char c);
char				**ft_split(char const *s, char c);
int					ft_putstr(char *str);
void				ft_putdisorder(float num, int precision);
void				ft_putnbr(int n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_sqrt(int num);
int					init_ops(t_ops *ops);
int					init_structs(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);
int					init_stack(t_stack *stack_1, t_stack *stack_2);
void				error_message(void);
int					get_flag(char *str);
int					apply_flag(int flag, t_ops *ops);
void				print_bench(t_ops *ops, t_stack *stack);
int					ft_putstr_stderr(char *str);

// List management

void				clear_list(t_stack *stack);
t_list				*ft_new_node(int num);
int					ft_add_back(t_stack *stack, t_list *new_node);
int					ft_add_front(t_stack *stack, t_list *new_node);
int					create_list(char **argv, t_stack *stack);
t_list				*extract_first(t_stack *stack);
void				clear_lists(t_stack *stack_a, t_stack *stack_b);

// Operations

void				swap_first_elements(t_stack *stack);
void				push_element(t_stack *stack_to_push,
						t_stack *stack_to_extract);
void				rotate_elements(t_stack *stack);
void				rotate_reverse(t_stack *stack);

// Named operations

void				sa(t_stack *stack_a, t_ops *ops);
void				sb(t_stack *stack_b, t_ops *ops);
void				ss(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
void				pa(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
void				pb(t_stack *stack_b, t_stack *stack_a, t_ops *ops);
void				ra(t_stack *stack_a, t_ops *ops);
void				rb(t_stack *stack_b, t_ops *ops);
void				rr(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
void				rra(t_stack *stack_a, t_ops *ops);
void				rrb(t_stack *stack_b, t_ops *ops);
void				rrr(t_stack *stack_a, t_stack *stack_b, t_ops *ops);

// Cmd management

int					list_from_argv(char **argv, t_stack *stack, t_ops *ops);
int					check_command_line(char **argv, int argc);

// Stack management

int					calculate_disorder(t_stack *stack);
int					repetition_found(t_stack *stack);

// Selection Sort

int					look_for_min_position(t_stack *stack, int min);
int					look_for_min(t_stack *stack);
void				push_min(t_stack *stack_a, t_stack *stack_b,
						int min_position, t_ops *ops);
void				push_all_to_b(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);
void				return_all_to_a(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);
void				selection_sort(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);

// Chunk sort

int					get_chunks_size(t_stack *stack_a);
int					get_chunks_number(t_stack *stack_a);
int					look_for_max_position(t_stack *stack, int min);
void				push_max(t_stack *stack_a, t_stack *stack_b,
						int max_position, t_ops *ops);
void				chunks_to_b(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
void				chunk_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops);

// Radix sort

void				bit_set_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops,
						int index);
int					max_bits(int size);
void				radix_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
int					still_bit_zero(t_stack *stack_a, int bit_index);

// Sort utils

void				push_all_largest_to_a(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);
int					look_for_max(t_stack *stack);
t_list				*get_minimum_node(t_stack *stack_a);
void				assign_index(t_stack *stack_a);
void				push_all_to_a(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);

// Algorithm selection

void				algorithm_selection(t_stack *stack_a, t_stack *stack_b,
						t_ops *ops);

#endif