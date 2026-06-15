/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:18:32 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:29 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of stack b by one.*/
void	rb(t_stack *stack_b, t_ops *ops)
{
	rotate_elements(stack_b);
	ft_putstr("rb\n");
	ops->rb += 1;
	ops->total_operations += 1;
}
