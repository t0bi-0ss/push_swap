/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_detecter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:30:51 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/15 19:55:44 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	args_detecter(int argc, char **argv)
{
	int	index;

	index = 0;
	argc -= 2;
	while (argc >= 0)
	{
		if (get_flag(argv[argc]))
		{
			argc--;
			continue ;
		}
		while (ft_isspace(argv[argc][index]))
			index++;
		if (!ft_isspace(argv[argc][index]) && argv[argc][index])
			return (1);
		argc--;
	}
	return (0);
}
