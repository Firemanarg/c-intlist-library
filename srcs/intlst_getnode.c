/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_getnode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:12:50 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Return a node at an specified position (index)
//				of an inting list.
//
// Arguments: 'lst' is a pointer to a inting list. 'index' is the desired
//				position of node.
//
// Return value: Pointer to node if success, or NULL if 'lst' is NULL
//				or 'index' value is invalid (0 < index or index >= list size).

t_intnode	*intlst_getnode(t_intlist *lst, int index)
{
	t_intnode	*node;
	int			count;

	if (lst->size == 0 || index < 0 || index >= lst->size)
		return (NULL);
	node = lst->front;
	count = 0;
	while (count < index)
	{
		node = node->next;
		count += 1;
	}
	return (node);
}
