/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtoback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:03:12 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/02 20:58:17 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_addtoback(t_list	**list, t_list	*newnode)
{
	t_list	*temp;

	temp = ft_lastlist(*list);
	temp->next = newnode;
}
