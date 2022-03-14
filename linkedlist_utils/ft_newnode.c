/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:43:08 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/09 16:38:10 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

t_list	*ft_newnode(int content, int idx)
{
	t_list	*newone;

	newone = malloc(sizeof(t_list));
	if (!newone)
		return (NULL);
	newone->content = content;
	newone->idx = idx;
	newone->next = NULL;
	return (newone);
}
