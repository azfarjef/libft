#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[] = "Hello world!";

	printf("%u\n", (int)ft_strlen(str));
	printf("%u\n", (int)strlen(str));

	return (0);
}
	