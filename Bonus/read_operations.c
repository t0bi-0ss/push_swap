/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:06:39 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:50:25 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

char	*read_operations(void)
{
	char	*tmp;
	char	*whole;
	char	*new_line;

	new_line = get_next_line(0);
	whole = NULL;
	while (new_line)
	{
		tmp = ft_strjoin(whole, new_line);
		if (whole)
		{
			free(whole);
			whole = NULL;
		}
		whole = tmp;
		free(new_line);
		new_line = get_next_line(0);
	}
	return (whole);
}
