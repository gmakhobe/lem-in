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
    (point->last_move)? ft_putchar('\n') : ft_putchar(' ');
    return ;
}