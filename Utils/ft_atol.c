/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:15:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:44 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

static int	ft_issign(unsigned char c);

int			overflow_check(long *result, int digit, int sign);

/*Converts initial part of the string to a long
integer while checking for overflows*/
long	ft_atol(const char *nptr)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (ft_issign(*nptr))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (overflow_check(&result, (*nptr - '0'), sign))
			return (result);
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

int	overflow_check(long *result, int digit, int sign)
{
	if (*result * sign > (LONG_MAX - digit) / 10)
	{
		*result = LONG_MAX;
		return (1);
	}
	if (*result * sign < (LONG_MIN + digit) / 10)
	{
		*result = LONG_MIN;
		return (1);
	}
	return (0);
}

static int	ft_issign(unsigned char c)
{
	return (c == '-' || c == '+');
}
