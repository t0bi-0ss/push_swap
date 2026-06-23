/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:20:13 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:51:27 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	operations_compare(char **str_list);

int	operations_checker(char ***str_list_ptr)
{
	char	*operations_str;

	operations_str = read_operations();
	*str_list_ptr = ft_split(operations_str, '\n');
	free(operations_str);
	operations_str = NULL;
	if (!operations_compare(*str_list_ptr))
	{
		free_arr(str_list_ptr);
		return (0);
	}
	return (1);
}

int	operations_compare(char **str_list)
{
	int			match_found;
	const char	**operations = (const char *[]){"pa", "pb", "ra", "rb", "rr",
		"rra", "rrb", "rrr", NULL};
	int			size;

	match_found = 0;
	size = 0;
	while (*str_list)
	{
		while (*operations)
		{
			if (ft_strlen(*operations) > ft_strlen(*str_list))
				size = ft_strlen(*operations);
			else
				size = ft_strlen(*str_list);
			if (!ft_strncmp(*operations, *str_list, size))
				match_found = 1;
			operations++;
		}
		if (match_found == 0)
			return (0);
		str_list++;
	}
	return (match_found);
}
