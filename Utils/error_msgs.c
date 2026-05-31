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
	ft_putstr("Memory allocation failed when creating a new node\n");
}

void not_all_digits_error(void)
{
	ft_putstr("Input does not contain digits excusively or they are not separated by 'spaces'\n");
}

void insert_node_fail(void)
{
	ft_putstr("Node insertion has failed\n");
}

void invalid_cmd_argument(void)
{
	ft_putstr("Command line argument(s) is(are) invalid\n");
}