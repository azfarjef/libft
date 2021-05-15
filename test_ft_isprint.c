#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('M'));
	printf("%d\n", ft_isprint('Z'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('z'));
	printf("%d\n", ft_isprint('m'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('2'));
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint('9'));
	printf("%d\n", ft_isprint('.'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint('\177'));
	// printf("%d\n", ft_isprint('\178'));
}