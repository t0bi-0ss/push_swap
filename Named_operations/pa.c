/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:22 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Take the first element at the top of b and put it at the top of a.*/
void	pa(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	push_element(stack_a, stack_b);
	ft_putstr("pa\n");
	ops->pa += 1;
	ops->total_operations += 1;
}
