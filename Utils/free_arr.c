/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:29:41 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:18 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	free_arr(char ***arr)
{
	int	index;

	if (!arr)
		return ;
	index = 0;
	while ((*arr)[index])
	{
		free((*arr)[index]);
		(*arr)[index] = NULL;
		index++;
	}
	free(*arr);
	*arr = NULL;
}
