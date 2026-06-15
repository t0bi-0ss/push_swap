/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:21:35 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:37 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of stack b by one.*/
void	rrb(t_stack *stack_b, t_ops *ops)
{
	rotate_reverse(stack_b);
	ft_putstr("rrb\n");
	ops->rrb += 1;
	ops->total_operations += 1;
}
