#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('M'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('m'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('2'));
	printf("%c\n", ft_tolower('0'));
	printf("%c\n", ft_tolower('9'));
	printf("%c\n", ft_tolower('.'));
	printf("%c\n", ft_tolower(' '));
	printf("%c\n", ft_tolower('\0'));
	printf("%c\n", ft_tolower('\177'));
	// printf("%c\n", ft_tolower('\178'));
}