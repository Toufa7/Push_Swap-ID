#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
}   t_list;

t_list  *ft_newnode(void  *content);
int		ft_nodesize(t_list	*list);
t_list	*ft_lastlist(t_list	*list);
void	ft_display(t_list	*node);
void    ft_addtofront(t_list **list, t_list *newnode);
void	ft_addtoback(t_list	**list, t_list	*newnode);

#endif
