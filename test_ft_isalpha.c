#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('M'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('m'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('2'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha('9'));
	printf("%d\n", ft_isalpha('.'));
	printf("%d\n", ft_isalpha(' '));
}