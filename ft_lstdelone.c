#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = malloc(10); 
	node->next = NULL;

	ft_lstdelone(node, del);
	printf("Done! Node and content freed.\n");
	return (0);
}*/