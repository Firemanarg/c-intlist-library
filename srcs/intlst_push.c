/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:11:32 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Insert a node at an specified position (index)
//				of an inting list.
//
// Arguments: 'lst' is a pointer to a inting list. 'node' is a pointer to
//			  an inting node. 'index' is the desired position to insert node.
//
// Return value: Return a pointer to the inserted node, or NULL
//				if 'lst' or 'node' value is NULL.

t_intnode	*intlst_push(t_intlist *lst, t_intnode *node, int index)
{
	t_intnode	*tmp;
	t_intnode	*out;

	out = NULL;
	if (lst == NULL || node == NULL || index < 0 || index > lst->size)
		return (NULL);
	if (index == 0 || lst->size == 0)
		out = intlst_push_front(lst, node);
	else if (index == lst->size)
		out = intlst_push_back(lst, node);
	else
	{
		tmp = intlst_getnode(lst, index);
		if (tmp == NULL)
			return (NULL);
		node->next = tmp;
		node->prev = tmp->prev;
		tmp->prev->next = node;
		tmp->prev = node;
		lst->size += 1;
		return (node);
	}
	return (out);
}
