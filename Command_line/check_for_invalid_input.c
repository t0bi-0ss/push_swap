/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_invalid_input.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:35:24 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 15:18:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Will parse all strings in argv checking if they only contain digits or signs,
	and in case of multiple numbers
in the same string it will check they are only separated by spaces. In addition if 2 or more signs are found
before a number it will invalid argv*/

#include "../ft_pushswap.h"

int	recursive_check(char *str);

/*Returns 0 if argv contains anything different than a digit or if argc < 2*/
int	check_command_line(char **argv, int argc)
{
	if (argc < 2)
	{
		ft_putstr("Not enough arguments were passed\n");
		return (0);
	}
	if (!**argv)
	{
		invalid_cmd_argument();
		return (0);
	}
	while (*argv)
	{
		if (!recursive_check(*argv))
		{
			invalid_cmd_argument();
			return (0);
		}
		argv++;
	}
	return (1);
}

int	recursive_check(char *str)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		str++;
	if (ft_isspace(*str))
		return (recursive_check(str));
	else if (*str == '\0')
		return (1);
	return (0);
}
