#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*res = ft_strtrim("abcHello abc Worldabc", "abc");
	char	*res2 = ft_strtrim("Helloabcdedcba", "acbde");
	char	*res3 = ft_strtrim("Hello World", " ");

	printf("%s\n", res);
	printf("%s\n", res2);
	printf("%s\n", res3);

	free(res);
	free(res2);
	free(res3);
}