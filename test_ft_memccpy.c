#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
  
int main ()
{
  char str1[] = "Geeks";  
  char str2[] = "Quiz";  
  char str3[] = "Geeks";  
  char *ptr1;
  char *ptr2;

  
  puts("str1 before memccpy ");
  puts(str1);
  
  /* Copies contents of str2 to sr1 */
  ptr1 = ft_memccpy (str1, str2, 'i', sizeof(str2));
  ptr2 = memccpy (str3, str2, 'i', sizeof(str2));

  
  puts("\nstr1 after ft_memccpy ");
  puts(str1);
  puts("\nstr3 after memccpy ");
  puts(str3);
  
  printf("%c\n", *ptr1);
  printf("%c\n", *ptr2);

  return 0;
}