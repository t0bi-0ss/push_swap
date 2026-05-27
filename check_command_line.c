/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_command_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:33:39 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/27 15:08:45 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_all_isdigit(char *str)
{
	while (*str)
		if (!ft_isdigit(*str++))
		return (0);
	return (1);
}

/*Checks if all argv's elements correspond to numbers
Returns 0 + writes error message if anything besides a number is found or if argv is empty*/
int	check_argv(char **argv)
{
	if (!*argv)
		return (0);
	while(*argv)
	{
		if (!ft_all_isdigit((*argv)++))
			{
				not_all_digits_error();
				return (0);
			}
	}
	return (1);
}
