/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:11:35 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Insert a node at the begin (front) of an inting list.
//
// Arguments: 'lst' is a pointer to a inting list. 'node' is a pointer to
//			  an inting node.
//
// Return value: Return a pointer to the inserted node, or NULL
//				if 'lst' or 'node' value is NULL.

t_intnode	*intlst_push_front(t_intlist *lst, t_intnode *node)
{
	if (lst == NULL || node == NULL)
		return (NULL);
	if (lst->size == 0)
	{
		node->prev = NULL;
		node->next = NULL;
		lst->front = node;
		lst->back = node;
	}
	else
	{
		node->next = lst->front;
		node->prev = NULL;
		lst->front->prev = node;
		lst->front = node;
	}
	lst->size += 1;
	return (node);
}
