void    ft_clear_data(char **data) //ft_strdel_table
{
	size_t	i;

	i = 0;
	while (data[i] != NULL)
    {
		free(data[i]);
        i++;
    }
	free(data);
    data = NULL;
}