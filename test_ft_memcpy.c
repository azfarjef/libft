#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
  
int main ()
{
  char str1[] = "Geeks";  
  char str2[] = "Quiz";  
  
  puts("str1 before memcpy ");
  puts(str1);
  
  /* Copies contents of str2 to sr1 */
  printf("%s\n", (char *)ft_memcpy(str1, str2, sizeof(str2)));
  
  puts("\nstr1 after memcpy ");
  puts(str1);
  
  return 0;
}