#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   char str1[15];
   char str2[15];
   int ret1;
   int ret2;

   memcpy(str1, "AbCDEf", 6);
   memcpy(str2, "ABCDeF", 6);

   ret1 = memcmp(str1, str2, 5);
   ret2 = ft_memcmp(str1, str2, 5);

   if(ret1 > 0) {
      printf("str2 is less than str1\n");
   } else if(ret1 < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   printf("%d\n", ret1);
   printf("%d\n", ret2);
   
   return(0);
}