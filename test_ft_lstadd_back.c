#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char 	a = 'z';
	void 	*ptr = &a;
	char 	b = 'n';
	t_list	*list = ft_lstnew(ptr);
	t_list	*tmp = list;
	t_list	*new = ft_lstnew(&b);

	//create and initialize linked list
	for (int i = 0; i < 3; i++)
	{
		tmp->next = ft_lstnew(ptr);
		tmp = tmp->next;
	}

	ft_lstadd_back(&list, new);

	//print linked list
	for (t_list *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%c\n", *(char *)(tmp->content));
	}

	//free linked list
	while (list != NULL)
	{
		t_list *tmp= list->next;
		free(list);
		list = tmp;
	}
}