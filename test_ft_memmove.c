#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);
  
int main ()
{
  char str1[10] = "Geeks";  
  // char str2[] = "Geeks";  
  char str3[10] = "Geeks";
  
  puts("str1 before memmove ");
  puts(str1);
  
  /* Copies contents of str2 to sr1 */
  ft_memmove (str1 + 2, str1, 3);
  memmove (str3 + 2, str3, 3);
  // memcpy (str2 + 2, str2, sizeof(str1));
  
  puts("\nstr1 after memmove ");
  puts(str1);
  puts("\nstr1 after memmove ");
  puts(str3);
  // puts("\nstr1 after memcpy ");
  // puts(str2);
  
  return 0;
}