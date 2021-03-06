/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtofront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:35:19 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/02 20:58:17 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void ft_addtofront(t_list **list, t_list *newnode)
{
	if (!(list || newnode))
		return ;
	newnode->next=*list;
	*list=newnode;
}
