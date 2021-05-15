#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s2[] = "Hello\200";
	char s1[] = "Hello";
	char s3[] = "hello\200";
	char s4[] = "Hello";

	printf("%d %d\n", strncmp(s2, s1, 6), ft_strncmp(s1, s2, 6));
	printf("%d %d\n", strncmp(s2, s3, 4), ft_strncmp(s2, s3, 4));
	printf("%d %d\n", strncmp(s2, s4, 4), ft_strncmp(s2, s4, 4));
	return (0);
}