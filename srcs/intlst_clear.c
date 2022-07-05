/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:55:19 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:01:54 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Clear an inting list, freeing all nodes and their content.
//
// Arguments: 'lst' is the target inting list to be cleaned.
//
// Return value: Void function.

void	intlst_clear(t_intlist *lst)
{
	t_intnode	*node;
	t_intnode	*tmp;

	node = lst->front;
	while (node != NULL)
	{
		tmp = node->next;
		intnode_free(node);
		node = tmp;
	}
	lst->front = NULL;
	lst->back = NULL;
}
