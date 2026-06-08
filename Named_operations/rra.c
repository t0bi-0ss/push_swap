/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:19:58 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 14:30:38 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of stack a by one.*/
void rra(t_stack *stack_a, t_ops *ops)
{
	rotate_reverse(stack_a);
	ft_putstr("rra\n");
	ops->rra += 1;
	ops->total_operations += 1;
}