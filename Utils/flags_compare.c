/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_compare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:16:31 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/23 16:51:39 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	get_flag(char *str)
{
	const char	*flags[] = {"--simple", "--medium", "--complex", "--adaptive",
		"--bench", NULL};
	int			i;

	i = 0;
	while (flags[i])
	{
		if (ft_strncmp(flags[i], str, ft_strlen(flags[i])) == 0
			&& str[ft_strlen(flags[i])] == '\0')
			return (i + 1);
		i++;
	}
	return (0);
}

int	apply_flag(int flag, t_ops *ops)
{
	if (flag > 0 && flag < 4)
	{
		if (ops->strategy != 0 || ops->adaptative != 0)
			return (0);
		ops->strategy = flag;
	}
	else if (flag == 4)
	{
		if (ops->adaptative != 0)
			return (0);
		ops->adaptative = 1;
	}
	else if (flag == 5)
	{
		if (ops->bench != 0)
			return (0);
		ops->bench = 1;
	}
	else
		return (0);
	return (1);
}
