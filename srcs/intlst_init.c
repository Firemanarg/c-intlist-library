/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:12:04 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Initialize a list of intings (t_intlist) with null
// 				pointers and size value as zero.
//
// Arguments: 'lst' is a pointer to the inting list to be initialized.
//
// Return value: 1 if 'lst' is NULL, 0 if success.

int	intlst_init(t_intlist *lst)
{
	if (lst == NULL)
		return (1);
	lst->front = NULL;
	lst->back = NULL;
	lst->size = 0;
	return (0);
}
