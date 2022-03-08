#include "linkedlist.h"

t_list	*ft_lastlist(t_list	*list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
