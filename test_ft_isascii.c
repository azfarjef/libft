#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isascii('M'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('m'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('2'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii('.'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii('\177'));
	// printf("%d\n", ft_isascii('\178'));
}