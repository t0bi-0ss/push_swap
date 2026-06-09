/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:02:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/09 20:07:34 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	max_bits(int size)
{
	int counter;

	counter = 0;
	while (size)
	{
		size = size >> 1;
		counter++;
	}
	return (counter);
}