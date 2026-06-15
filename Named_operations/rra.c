/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:19:58 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:35 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of stack a by one.*/
void	rra(t_stack *stack_a, t_ops *ops)
{
	rotate_reverse(stack_a);
	ft_putstr("rra\n");
	ops->rra += 1;
	ops->total_operations += 1;
}
