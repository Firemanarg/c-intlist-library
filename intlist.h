/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:45:04 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 17:11:08 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLIST_H
# define STRLIST_H

# include <stdlib.h>
# include <unistd.h>

// Node Struct (Secondary Struct)
typedef struct s_intnode
{
	struct s_intnode	*next;
	struct s_intnode	*prev;
	int					content;
}	t_intnode;

// List Struct (Primary Struct)
typedef struct s_intlist
{
	struct s_intnode	*front;
	struct s_intnode	*back;
	int					size;
}	t_intlist;

void		intlst_clear(t_intlist *lst);
int			intlst_getindex(t_intlist *lst, t_intnode *node);
t_intnode	*intlst_getnode(t_intlist *lst, int index);
int			intlst_init(t_intlist *lst);
t_intnode	*intlst_pop_back(t_intlist *lst);
t_intnode	*intlst_pop_front(t_intlist *lst);
t_intnode	*intlst_pop_node(t_intlist *lst, t_intnode *node);
t_intnode	*intlst_pop(t_intlist *lst, int index);
void		intlst_print(t_intlist *lst);
t_intnode	*intlst_push_back(t_intlist *lst, t_intnode *node);
t_intnode	*intlst_push_front(t_intlist *lst, t_intnode *node);
t_intnode	*intlst_push(t_intlist *lst, t_intnode *node, int index);
int			intlst_swap_node(t_intlist *lst, int index1, int index2);
void		intnode_free(t_intnode *node);
t_intnode	*intnode_new(int content);

#endif