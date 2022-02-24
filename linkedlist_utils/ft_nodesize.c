/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:58:17 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/24 11:58:20 by otoufah          ###   ########.fr       */
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
