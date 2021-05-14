#include "libft.h"
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret1;
   char *ret2;

   ret1 = strchr(str, ch);
   ret2 = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret1);
   printf("String after |%c| is - |%s|\n", ch, ret2);

   return(0);
}