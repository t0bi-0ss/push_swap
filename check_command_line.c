/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_command_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:33:39 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/25 09:25:17 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*Checks if all argv's elements correspond to numbers while it counts the number of them
Returns 0 if anything besides a number is found, or numbers count if no error is found*/
int	check_argv(char **argv)
{
	int	counter;

	counter = 0;
	while(*argv)
	{
		if (!ft_all_isdigit(*argv++))
			return (0);
		counter++;
	}
	return (counter);
}
