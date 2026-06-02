/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_simultaneous.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:34:57 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 18:42:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of passed stacks*/
void simultaneous_swap(t_stack *stack1, t_stack *stack2)
{
	swap_first_elements(stack1);
	swap_first_elements(stack2);
}