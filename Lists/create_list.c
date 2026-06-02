/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:26:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 14:20:24 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"
#include <limits.h>

int	check_atol(long num);

int	create_list(char **argv, t_stack *stack)
{
	t_list *new_node;
	long	atol_val;

	new_node = NULL;
	while (*argv)
	{
		atol_val = ft_atol(*argv);
		if (!check_atol(atol_val))
		{
			clear_list(stack);
			return (0);
		}
		new_node = ft_new_node((int) atol_val);
		if (!new_node)
		{
			clear_list(stack);
			return (0);
		}
		if (!(ft_add_back(stack, new_node)))
			return (0);
		argv++;
	}
	return (1);
}

int	check_atol(long num)
{
	if (num > INT_MAX)
	{
		ft_putstr("Parameter is bigger than INT_MAX\n");
		return (0);
	}
	if (num < INT_MIN)
	{
		ft_putstr("Parameter is smaller than INT_MIN\n");
		return (0);
	}
	return (1);
}