/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:43:20 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:54 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	ft_putnbr(int n)
{
	long	num;
	long	quotient;
	char	to_be_passed;

	num = (long)n;
	if (num < 0)
	{
		write(2, "-", 1);
		num *= -1;
	}
	quotient = num / 10;
	to_be_passed = (num % 10) + '0';
	if (quotient > 0)
		ft_putnbr(quotient);
	write(2, &to_be_passed, 1);
}
