#include "lem_in.h"

void        ft_print(t_list *list)
{
    char    *str;

    str = (char*)list->content;
    ft_putstr(str);
    (str[0] != '\n')
        ft_putchar('\n');
    return ;
}

void        ft_print_point(t_list *list)
{
    t_turn  *point;

    point = (t_turn*)list->content;
    ft_putstr(ft_ant_link(ft_itoa(point->ant->id), point->room->name));
    (point->last_move)? ft_putchar('\n') : ft_putchar(' ');
    return ;
}

char        *ft_ant_link(char *id, char *name)
{
    char    *str;
    char    *s;

    str = ft_strjoin(id, ft_strjoin("-", name));
    s = ft_strjoin("L", str);
    return (s);
}

void        ft_error()
{
    ft_putendl("ERROR");
    return ;
}

void        ft_print_out(t_list *value, t_list *points)
{

    return ;
}