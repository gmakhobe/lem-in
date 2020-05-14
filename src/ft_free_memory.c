#include "lem_in.h"

void        ft_free(void *data)
{
    if (data == NULL)
        return ;
    free(data);
    return ;
}

void        ft_free_room(void *data)
{
    t_room  *ptr;

    if (data == NULL)
        return ;
    else
    {
        ptr = (t_room*)data;
        if (ptr->name != NULL)
        {
            ft_free(ptr->name);
        }
        free(data);
    }
    return ;
}

void        ft_clear(t_list **list, void (*clr)(void *))
{
    if (*list == NULL)
        return ;
    (*clr)((*list)->content);
    ft_memdel((void**)list);
    return ;
}

void        ft_free_list(t_list **list, void (*clr)(void *))
{
    t_list  *ptr;

    if(*list == NULL)
        return ;
    while (*list != NULL)
    {
        ptr = (*list)->next;
        f_clear(list, clr);
        *list = ptr;
    }
    return ;
}

void        ft_free_farm(t_farm *data)
{
    ft_free_list(&(data->rooms), ft_free_room);
    ft_free_list(&(data->ants), ft_free);
    ft_free_list(&(data->links), ft_free);
    ft_free_list(&(data->turns), ft_free);
    return ;
}