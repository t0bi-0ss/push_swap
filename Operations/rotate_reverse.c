/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:26:36 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 18:41:18 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of passed stack by one*/
void	rotate_reverse(t_stack *stack)
{
	stack->head = stack->tail;
	stack->tail = stack->tail->prev;
}