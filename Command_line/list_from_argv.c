/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_from_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:45:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 18:56:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	list_from_argv(char **argv, t_stack *stack)
{
	char **splitted;

	while (*argv)
	{
		splitted = ft_split(*argv, ' ');
		if(!create_list(splitted, stack))
			return (0);
		free(splitted);
		argv++;
	}
	return (1);
}