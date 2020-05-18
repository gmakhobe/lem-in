#include "../includes/lem_in.h"

t_list		*ft_lstcpy(void *content, size_t content_size)
{
	t_list	*res;

	if (!(res = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	res->content = content;
	res->content_size = content_size;
	res->next = NULL;
	return (res);
}