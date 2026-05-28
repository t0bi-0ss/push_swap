/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:58:45 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/28 11:11:50 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	clear_list(t_list **head)
{
	t_list *tmp;
	char	*str;

	while(*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	str = "List has been cleared";
	write(1, str, ft_strlen(str));
}