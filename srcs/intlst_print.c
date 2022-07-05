/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:25:57 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 19:45:30 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intlist.h"

// Description: Print a int (fd 1) list following this format
//				filled -> [int1, int2, ..., int_n]
//				empty -> []
//
// Arguments: 'lst' is a pointer to a inting list.
//
// Return value: Void function.

static void	putnbr(int n);
static void	putnbr_rec(unsigned int n, int mult);

void	intlst_print(t_intlist *lst)
{
	t_intnode	*node;

	node = lst->front;
	write(1, "[", 1);
	while (node)
	{
		putnbr(node->content);
		node = node->next;
		if (node != NULL)
			write(1, ", ", 2);
	}
	write(1, "]", 1);
}

void	putnbr(int n)
{
	long			mult;
	unsigned int	nbr;

	mult = 1;
	while (n / (mult * 10) != 0)
		mult *= 10;
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = n * -1;
	}
	else
		nbr = n;
	putnbr_rec(nbr, mult);
}

static void	putnbr_rec(unsigned int n, int mult)
{
	char			c;
	unsigned int	tmp;

	if (mult > 0)
	{
		c = '0' + (n / mult);
		write(1, &c, 1);
		tmp = n / mult;
		tmp *= mult;
		putnbr_rec(n - tmp, mult / 10);
	}
	return ;
}
