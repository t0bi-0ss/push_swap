/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:16:53 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:27 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of stack a by one.*/
void	ra(t_stack *stack_a, t_ops *ops)
{
	rotate_elements(stack_a);
	ft_putstr("ra\n");
	ops->ra += 1;
	ops->total_operations += 1;
}
