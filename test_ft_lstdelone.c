#include "libft.h"
#include <stdio.h>

static void	del(void *content)
{
	free(content);
}

int        main(void)
{
    // char     a[] = "Hello";
    char     *ptr1 = malloc(1);
	char     *ptr2 = malloc(1);
    ptr1[0] = 'z';
    ptr2[0] = 'a';
    t_list    *list = ft_lstnew(ptr2);
    t_list    *tmp = list;

    //create and initialize linked list
    for (int i = 0; i < 2; i++)
    {
        tmp->next = ft_lstnew(ptr1);
        tmp = tmp->next;
    }

    //print linked list
    for (t_list *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%c\n", *(char *)(tmp->content));
    }

    tmp = list->next;
    ft_lstdelone(list, &del);
    list = tmp;

	printf("After ft_lstdelone\n");

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