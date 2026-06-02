/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_simultaneous.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:28:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 18:41:13 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of passed stacks by one*/
void	rotate_reverse_simultaneous(t_stack *stack_1, t_stack *stack_2)
{
	rotate_reverse(stack_1);
	rotate_reverse(stack_2);
}