#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int		main(void)
{
	// char *str1 = "Hello World";
	// char buff1[20];
	// char *str2 = "Hello World";
	// char buff2[20];
	char str1[] = "coucou";
	char buff1[10];
	char str2[] = "coucou";
	char buff2[10];
	size_t ori;
	size_t fake;
	size_t size = 5;

	memset(buff1, 'A', 10);
	memset(buff2, 'A', 10);

	ori = ft_strlcpy(buff1, str1, size);
	fake = ft_strlcpy(buff2, str2, size);

	for (int i = 0; i < 13; i++)
    {
            printf("index = %d value = %c\n", i, buff1[i]);
            printf("index = %d value = %c\n", i, buff2[i]);
    }

	printf("return value ori= %zu\n", ori);
	printf("return value fake = %zu\n", fake);

    return (0);
}

