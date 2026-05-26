/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:24:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/25 11:42:12 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H
#include <stdlib.h>
#include <unistd.h>

//STRUCTS

typedef struct s_list
{
	int		num;
	struct s_list *next;
	struct s_list *prev;
}			t_list;

typedef struct s_list
{
	struct t_list *head;
	float disorder;
}		t_stack;

// Error messages

void node_error(void);

// Checkers

int	check_argv(char **argv);
size_t	ft_strlen(const char *s);

#endif