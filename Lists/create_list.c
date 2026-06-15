/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:26:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:12 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"
#include <limits.h>

int	check_atol(long num);

/*Creates linked list from input while checking for overflows*/
int	create_list(char **argv, t_stack *stack)
{
	t_list	*new_node;
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
		new_node = ft_new_node((int)atol_val);
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

/*Checks if returned value by atol would cause an int overflow*/
int	check_atol(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}
