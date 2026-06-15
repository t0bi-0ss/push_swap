/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:26:36 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:55 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of passed stack by one*/
void	rotate_reverse(t_stack *stack)
{
	if (!stack->head || !stack->tail)
		return ;
	stack->head = stack->tail;
	stack->tail = stack->tail->prev;
}
