/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intnode_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:32 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Allocate a new inting node (t_intnode) with null
// 				pointers and argument content.
//
// Arguments: 'content' is a pointer to a char array.
//
// Return value: NULL if allocation fails, otherwise return a pointer
// 				 to the allocated node.

t_intnode	*intnode_new(int content)
{
	t_intnode	*node;

	node = malloc(sizeof(t_intnode));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->content = content;
	return (node);
}
