/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_getindex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:01:55 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Return the index of a node in a inting list.
//
// Arguments: 'lst' is a pointer to a inting list. 'node' is a pointer to
//			  an inting node.
//
// Return value: -1 if 'lst' or 'node' value is NULL, or if node does'nt belong
//				to 'lst'. If success, return the index of the node.

int	intlst_getindex(t_intlist *lst, t_intnode *node)
{
	t_intnode	*tmp;
	int			index;

	index = 0;
	tmp = lst->front;
	while (tmp)
	{
		if (tmp == node)
			return (index);
		index += 1;
		tmp = node->next;
	}
	return (-1);
}
