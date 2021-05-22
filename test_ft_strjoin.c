#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "World";
	char	*res = ft_strjoin(s1, s2);

	printf("%s", res);

	printf("\n");
	free(res);
}