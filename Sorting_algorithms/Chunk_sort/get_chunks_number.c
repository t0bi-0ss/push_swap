/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_chunks_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:05:33 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 21:06:04 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Calculates number of chunks*/
int	get_chunks_number(t_stack *stack_a)
{
	int chunks_size;

	if (!stack_a || !stack_a->size)
		return (0);
	chunks_size = get_chunks_size(stack_a);
	if (stack_a->size % chunks_size > 0)
		return (stack_a->size / chunks_size + 1);
	return (stack_a->size / chunks_size);
}