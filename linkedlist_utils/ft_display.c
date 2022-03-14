/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:44:02 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/09 16:41:53 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_display(t_list	*node)
{
	while (node != NULL)
	{
		ft_printf("[%d] - |%d|\n",node->idx ,node->content);
		node = node->next;
	}
}
