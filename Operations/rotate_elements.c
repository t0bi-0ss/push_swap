/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:13:27 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:53 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of passed stack by one*/
void	rotate_elements(t_stack *stack)
{
	if (!stack->head || !stack->tail)
		return ;
	stack->tail = stack->head;
	stack->head = stack->head->next;
}
