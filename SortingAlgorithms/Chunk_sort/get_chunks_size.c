/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_chunks_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:12:31 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:22:56 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Get chunks_size*/
int	get_chunks_size(t_stack *stack_a)
{
	int	chunks_size;

	if (!stack_a || !stack_a->head)
		return (-1);
	chunks_size = stack_a->size / ft_sqrt(stack_a->size);
	return (chunks_size);
}
