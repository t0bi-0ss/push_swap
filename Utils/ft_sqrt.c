/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:13:26 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 19:22:42 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Calculate most aproximate square root*/
int	ft_sqrt(int	num)
{
	int root;

	if (!num)
		return (0);
	root = 1;
	while (root <= num/2)
	{
		if (root *root == num)
			break ;
		if (root * root > num)
			return (root - 1);
		root++;
	}
	return (root);
}