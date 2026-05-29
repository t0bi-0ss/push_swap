/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:26:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 18:26:30 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	create_list(char **argv, t_stack *stack)
{
	t_list *new_node;
	int num;

	new_node = NULL;
	while (*argv)
	{
		num = ft_atoi(*argv);
		new_node = ft_new_node(num);
		if (!new_node)
		{
			clear_list(stack);
			return (0);
		}
		if (!(ft_insert_new_node(stack, new_node)))
			return (0);
		argv++;
	}
	return (1);
}
