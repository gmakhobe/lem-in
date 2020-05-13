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

void        ft_free_farm(t_farm *data)
{
    return ;
}