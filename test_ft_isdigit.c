#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isdigit('M'));
	printf("%d\n", ft_isdigit('Z'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit('m'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('.'));
	printf("%d\n", ft_isdigit(' '));
}