/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:37:34 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/02 20:59:11 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"

typedef struct s_list
{
    int	content;
    struct s_list *next;
}   t_list;

t_list	*ft_newnode(int	content);
int		ft_nodesize(t_list	*list);
t_list	*ft_lastlist(t_list	*list);
void	ft_display(t_list	*node);
void	ft_addtofront(t_list **list, t_list *newnode);
void	ft_addtoback(t_list	**list, t_list	*newnode);
t_list  *ft_stackfill(int nbr, char *arg[]);

#endif
