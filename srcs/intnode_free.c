/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intnode_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:49:49 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:12:39 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Free a node.
//
// Arguments: 'node' is the target node to be freed.
//
// Return value: Void function.

void	intnode_free(t_intnode *node)
{
	if (node != NULL)
		free(node);
}
