/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:08:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:08 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	index = 0;
	if (!n)
		return (0);
	while (index < n && (u_s1[index] || u_s2[index]))
	{
		if (u_s1[index] != u_s2[index])
			return (u_s1[index] - u_s2[index]);
		index++;
	}
	return (0);
}
