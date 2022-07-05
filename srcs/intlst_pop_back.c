/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_pop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:11:55 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Remove a node at the end (back) from an inting list, and set
//				it's next and prev values to NULL.
//
// Arguments: 'lst' is a pointer to a inting list.
//
// Return value: Return a pointer to the removed node if success, otherwise
//				return NULL (if 'lst' is NULL or empty).

t_intnode	*intlst_pop_back(t_intlist *lst)
{
	t_intnode	*node;

	if (lst == NULL || lst->size == 0)
		return (NULL);
	node = lst->back;
	lst->back = node->prev;
	if (node->prev)
		node->prev->next = NULL;
	else
		lst->front = NULL;
	node->next = NULL;
	node->prev = NULL;
	lst->size -= 1;
	return (node);
}
