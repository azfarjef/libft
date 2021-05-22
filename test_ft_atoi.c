#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n+--12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n+--12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n--12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n--12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n+-12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n+-12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n++12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n++12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n-+12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n-+12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n-12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n-12345"));
	printf("%d\n", ft_atoi(" 	\t\r\v\f\n+12345"));
	printf("%d\n", atoi(" 	\t\r\v\f\n+12345"));
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", atoi("12345"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("-2147483650"));
	printf("%d\n", atoi("-2147483650"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("2147483648"));
}