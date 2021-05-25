#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "Hello, World";
	char	*res = ft_substr(s1, 0, 42000);

	for (int i = 0; i < 15; i++)
		printf("%c", res[i]);
	printf("\n");
	free(res);
}
