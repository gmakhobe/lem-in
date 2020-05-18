int		ft_jump_comments(t_list **input) //skip_comments
{
    int check_comment;

    check_comment = is_comment(*input);
    if (!check_comment)
        return (0);
    else
        *input = (*input)->next;
		return (1);
    
}


