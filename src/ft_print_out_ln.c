#include "../includes/lem_in.h"

void        ft_print_list(t_list *list, void (*fn)(t_list *))
{
    if (list == NULL)
        return ;
    (*fn)(list);
    while (list->next != NULL)
    {
        list = list->next;
        (*fn)(list);
    }
    return ;
}