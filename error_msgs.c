/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:47:45 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/25 10:15:41 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void node_error(void)
{
	char	*str;

	str = "Memory allocation failed when creating a new node\n";
	write(1, str, ft_strlen(str));
}