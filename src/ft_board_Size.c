#include "../includes/lem_in.h"

size_t		ft_board_size(char **board)//get_table_size
{
	size_t i;

	i = 0;
    if(!board)
        return 0;
    else
       while (board[i] != NULL)
			i++;
	return (i);
}