#include "lem_in.h"

int check_if_comment(t_list *data)
{
	char *str;

	if (!data)
		return (0);
	str = (char *)(data->content);
	if (!str || ft_strlen(str) <= 1)
		return (0);
	if (str[0] != '#' || str[1] == '#')
		return (0);
	return (1);
}

int ignore_comments(t_list **data)
{
	if (check_if_comment(*data))
	{
		*data = (*data)->next;
		return (1);
	}
	return (0);
}

int ignore_commands(t_list **data)
{
	int result;

	result = get_command(*data);
	if (result != -1 && result != 1 && result != 2)
	{
		*data = (*data)->next;
		return (1);
	}
	return (0);
}

int get_command(t_list *data)
{
	char *str;

	if (!data)
		return (-1);
	str = (char *)(data->content);
	if (!str || ft_strlen(str) <= 2)
		return (-1);
	if (str[0] != '#' || str[1] != '#')
		return (-1);
	if (!ft_strcmp(str + 2, "start"))
		return (1);
	if (!ft_strcmp(str + 2, "end"))
		return (2);
	return (0);
}
