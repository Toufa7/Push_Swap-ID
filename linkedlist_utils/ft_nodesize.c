/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:58:17 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/14 15:44:37 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int	ft_nodesize(t_list	*list)
{
	int	idx;

	idx = 0;
	while (list->next != NULL)
	{
		list = list->next;
		idx++;
	}
	return (idx);
}
