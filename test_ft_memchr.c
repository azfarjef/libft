#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret1;
   char *ret2;

   ret1 = memchr(str, ch, strlen(str));
   ret2 = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret1);
   printf("String after |%c| is - |%s|\n", ch, ret2);

   return(0);
}