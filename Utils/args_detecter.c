/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_detecter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:30:51 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/16 16:59:57 by ilbozhek         ###   ########.fr       */
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
		if (!argv[argc][index])
			return (0);
		argc--;
	}
	return (1);
}
