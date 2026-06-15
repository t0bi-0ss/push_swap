/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:21:55 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:40 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of both stack a and stack b by one.*/
void	rrr(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
	ft_putstr("rrr\n");
	ops->rrr += 1;
	ops->total_operations += 1;
}
