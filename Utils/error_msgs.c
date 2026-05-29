/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:47:45 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 19:14:54 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void node_error(void)
{
	char	*str;

	str = "Memory allocation failed when creating a new node\n";
	write(1, str, ft_strlen(str));
}

void not_all_digits_error(void)
{
	char	*str;
	str = "Input does not contain digits excusively\n";
	write (1, str, ft_strlen(str));
}

void insert_node_fail(void)
{
	char *str;

	str = "Node insertion has failed\n";
	write(1, str, ft_strlen(str));
}

void invalid_cmd_argument(void)
{
	char *str;

	str = "Command line argument is invalid\n";
	write(1, str, ft_strlen(str));
}