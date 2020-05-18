#include "lem_in.h"

int		main(void)
{
	t_list	*input;
	t_farm	farm;

	if (analyze_map_data(&input, &farm) && 
        find_path(&farm))
		print_result(input, farm.turns);
	else
		print_error();
	ft_lstdel(&input, free_line);
	free_farm(&farm);
	return (0);
}