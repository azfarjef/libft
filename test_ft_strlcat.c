#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int		main(void)
{
	char dst1[11] = "Start";
	char dst2[11] = "Start";
	char dst3[11] = "Start";
	int n2;
	int n1;
	int n3;

	n1 = ft_strlcat(dst1, "Hello", 7);
	n2 = ft_strlcat(dst2, "Hello", 0);
	n3 = ft_strlcat(dst3, "Hello", 4);
  
	printf("String = %s Return value = %d\n", dst1, n1);
	printf("String = %s Return value = %d\n", dst2, n2);
	printf("String = %s Return value = %d\n", dst3, n3);
	return 0;
}