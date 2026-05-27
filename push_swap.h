/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:24:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/27 16:32:50 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H
#include <stdlib.h>
#include <unistd.h>

//STRUCTS

typedef struct t_list
{
	int		num;
	struct t_list *next;
	struct t_list *prev;
}			t_list;

typedef struct t_stack
{
	t_list *head;
	float disorder;
}		t_stack;

// Error messages

void node_error(void);
void not_all_digits_error(void);
void insert_node_fail(void);

// Checkers

int	check_argv(char **argv);
size_t	ft_strlen(const char *s);

// Utils

int	ft_atoi(const char *nptr);

// List management

void	clear_list(t_list **head);

#endif