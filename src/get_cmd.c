#include "../includes/lem_in.h"

int             get_cmd(t_list *data)
{
    char    *str;

        if (!data)
        return (-1);
        str = (char*)(data->content);
        if (!str || ft_strlen(str) <= 2)
                return (-1);
        if (str[0] != COMMENT_ID || str[1] != COMMENT_ID)
                return (-1);
        if (!ft_strcmp(str + 2, START_COMMAND_ID))
                return (START_COMMAND);
        if (!ft_strcmp(str + 2, END_COMMAND_ID))
                return (END_COMMAND);
        return (0);
}