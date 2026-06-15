/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:56:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:01 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

static int	ft_get_numof_strings(char const *src, char delimiter)
{
	int	count;

	count = 0;
	while (*src)
	{
		while ((char)*src == delimiter && *src)
			src++;
		if ((char)*src != delimiter && *src)
		{
			count++;
			while ((char)*src != delimiter && *src)
				src++;
		}
	}
	return (count);
}

int	chars_to_delimiter(const char *str, char delimiter)
{
	int	count;

	count = 0;
	while (*str == delimiter && *str)
		str++;
	while (*str != delimiter && *str++)
		count++;
	return (count);
}

static char	**ft_create_array_of_strings(int strings_num, const char *str,
		char delimiter)
{
	char	**arr;
	int		index;
	int		curr_str_len;

	index = 0;
	arr = malloc((strings_num + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < strings_num)
	{
		curr_str_len = chars_to_delimiter(str, delimiter);
		arr[index] = malloc((curr_str_len + 1) * sizeof(char));
		if (!arr[index])
		{
			while (index > 0)
				free(arr[--index]);
			free(arr);
			return (NULL);
		}
		index++;
		while (*str++ == delimiter)
			str += curr_str_len;
	}
	arr[index] = NULL;
	return (arr);
}

void	pass_substr_to_arr(char const *src, char **arr, int strings_num,
		char delimiter)
{
	int	row;
	int	col;

	row = 0;
	while (row < strings_num)
	{
		col = 0;
		while ((char)*src == delimiter && *src)
			src++;
		while ((char)*src != delimiter && *src)
			arr[row][col++] = (char)*src++;
		arr[row][col] = '\0';
		row++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		numof_strings;
	char	**arr;

	if (!s)
		return (NULL);
	numof_strings = ft_get_numof_strings(s, c);
	arr = ft_create_array_of_strings(numof_strings, s, c);
	if (!arr)
		return (NULL);
	pass_substr_to_arr(s, arr, numof_strings, c);
	return (arr);
}
