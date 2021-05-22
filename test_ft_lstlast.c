#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char 	a = 'z';
	void 	*ptr = &a;
	t_list	*list = ft_lstnew(ptr);
	t_list	*tmp = list;

	//create and initialize linked list
	for (int i = 0; i < 3; i++)
	{
		tmp->next = ft_lstnew(ptr);
		tmp = tmp->next;
	}

	tmp->next = ft_lstnew("last");

	//print linked list
	for (t_list *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%c\n", *(char *)(tmp->content));
	}

	t_list	*last = ft_lstlast(list);

	printf("last element = %s\n", (char *)(last->content));

	//free linked list
	while (list != NULL)
	{
		t_list *tmp= list->next;
		free(list);
		list = tmp;
	}
}
