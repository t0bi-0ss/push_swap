/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_invalid_input.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:35:24 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 20:00:53 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	recursive_check(char *str);

/*Returns 0 if argv contains anything different than a digit or if argc < 2*/
int	check_command_line(char **argv, int argc)
{
	if (argc == 1)
		return (0);
	if (!argv)
	{
		error_message();
		return (0);
	}
	while (*argv)
	{
		if (!get_flag(*argv) && !recursive_check(*argv))
		{
			error_message();
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
