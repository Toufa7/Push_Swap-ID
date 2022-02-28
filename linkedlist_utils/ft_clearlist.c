 #include "linkedlist.h"

void    ft_clearlist(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    while (*lst)
    {
        temp = (*lst)->next;
        ft_deletenode(*lst, del);
        *lst = temp;
    }
    *lst = NULL;                                                                      
}