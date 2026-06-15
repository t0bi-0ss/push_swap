/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:37:59 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:51 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Take the first element at the top of stack_to_extract 
and put it at the top of stack_to_push.*/
void	push_element(t_stack *stack_to_push, t_stack *stack_to_extract)
{
	t_list	*extracted;

	if (!stack_to_extract->head)
		return ;
	extracted = extract_first(stack_to_extract);
	ft_add_front(stack_to_push, extracted);
}
