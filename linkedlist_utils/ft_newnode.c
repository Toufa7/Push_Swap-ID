/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:43:08 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/21 17:54:37 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

t_list *ft_newnode(void *content)
{
    t_list *newone;

    newone = malloc(sizeof(t_list));
    if (newone == NULL)
        return NULL;
    newone->content= content;
    newone->next= NULL;
    return (newone);
}

