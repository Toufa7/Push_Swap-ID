#include "linkedlist.h"

t_list	*ft_lastlist(t_list	*list)
{
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
