int		ft_jump_commands(t_list **input) //skip_commands
{
	  int	res;
    int start;
    int end;

    start = 1;
    end = 2;
    res = get_command(*input); // it calls slimy's function i think

	if ((res) != -1 && 	res != start && res != end)
  {
		  *input = (*input)->next;
		  return (1);
  }
  else
  {         
	    return (0);
  }
}