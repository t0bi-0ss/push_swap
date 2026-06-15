/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:24:44 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:20 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

t_list	*ft_new_node(int num)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->num = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->index = 0;
	return (new_node);
}
