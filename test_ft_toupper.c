#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper('M'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('m'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('2'));
	printf("%c\n", ft_toupper('0'));
	printf("%c\n", ft_toupper('9'));
	printf("%c\n", ft_toupper('.'));
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('\0'));
	printf("%c\n", ft_toupper('\177'));
	// printf("%c\n", ft_toupper('\178'));
}