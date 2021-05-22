#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char 	a = 'z';
	void 	*ptr = &a;
	t_list	*res;

	res = ft_lstnew(ptr);

	printf("%c\n", *(char *)(res->content));
	printf("%p\n", (*res).next);

	free(res);
}
