/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdisorder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:43:14 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:51 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int		power_of_ten(int power);
void	put_precision(int num, int precision);

void	ft_putdisorder(float disorder, int precision)
{
	int	num;

	if (precision == 0)
		ft_putnbr((int)(disorder * 100));
	else
	{
		num = disorder * 100 * (power_of_ten(precision));
		put_precision(num, precision);
	}
	write(2, "%", 1);
}

void	put_precision(int num, int precision)
{
	int		quotient;
	char	to_be_passed;

	quotient = num / 10;
	to_be_passed = (num % 10) + '0';
	if (quotient > 0)
		put_precision(quotient, precision - 1);
	write(2, &to_be_passed, 1);
	if (precision == 0)
		write(2, ".", 1);
}

int	power_of_ten(int power)
{
	int	result;

	result = 1;
	if (power > 0)
		result = 10 * power_of_ten(power - 1);
	return (result);
}
