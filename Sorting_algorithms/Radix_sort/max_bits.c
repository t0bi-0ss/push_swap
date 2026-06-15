/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:02:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:17 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	max_bits(int size)
{
	int	counter;

	counter = 0;
	while (size)
	{
		size = size >> 1;
		counter++;
	}
	return (counter);
}
