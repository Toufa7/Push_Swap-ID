/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:11:08 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/21 13:23:31 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int		ft_nodesize(t_list	*list)
{
	int idx;

	idx = 0;
	while (list->next != NULL)
	{
		list = list->next;
		idx++;
	}
	return (idx);
}
