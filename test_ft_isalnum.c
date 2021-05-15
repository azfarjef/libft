#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('M'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('m'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('.'));
	printf("%d\n", ft_isalnum(' '));
}