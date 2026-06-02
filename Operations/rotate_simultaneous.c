/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_simultaneous.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:21:12 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 18:41:02 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of passed stacks by one*/
void	rotate_simultaneous(t_stack *stack_1, t_stack *stack_2)
{
	rotate_elements(stack_1);
	rotate_elements(stack_2);
}