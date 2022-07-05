/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:11:48 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Remove a node at an specified position (index)
//				from an inting list, and set it's next and prev values to NULL.
//
// Arguments: 'lst' is a pointer to a inting list. 'index' is the desired
//				position to remove node.
//
// Return value: Return a pointer to the removed node if success, otherwise
//				return NULL (if 'lst' is NULL or empty).

t_intnode	*intlst_pop(t_intlist *lst, int index)
{
	t_intnode	*node;

	if (lst == NULL || lst->size == 0)
		return (NULL);
	if (index < 0 || index >= lst->size)
		return (NULL);
	node = intlst_getnode(lst, index);
	if (node == NULL)
		return (NULL);
	if (node == lst->front)
		return (intlst_pop_front(lst));
	else if (node == lst->front)
		return (intlst_pop_back(lst));
	node->prev->next = node->next;
	node->next->prev = node->prev;
	node->next = NULL;
	node->prev = NULL;
	lst->size -= 1;
	return (node);
}
