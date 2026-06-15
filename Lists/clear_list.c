/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:58:45 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:10 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	clear_list(t_stack *stack)
{
	t_list	*current;
	t_list	*next;

	if (!stack || !stack->head)
		return ;
	current = stack->head;
	stack->head->prev->next = NULL;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack->head = NULL;
}
