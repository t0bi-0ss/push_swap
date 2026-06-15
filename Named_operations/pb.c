/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:57:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:25 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Take the first element at the top of a and put it at the top of b.*/
void	pb(t_stack *stack_b, t_stack *stack_a, t_ops *ops)
{
	push_element(stack_b, stack_a);
	ft_putstr("pb\n");
	ops->pb += 1;
	ops->total_operations += 1;
}
