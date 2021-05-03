#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
        char str[] = "GeeksForGeeks is for programming geeks.";
    for (int i = 0; i < 10; i++)
    {
            printf("Before bzero():  %d\n", str[i]);
    }
  
    // Fill 8 characters starting from str[13] with '.'
    ft_bzero (str, 3);
  
    for (int i = 0; i < 10; i++)
    {
            printf("After bzero():  %d\n", str[i]);
    }
    return (0);
}