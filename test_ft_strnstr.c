#include "libft.h"
#include <string.h>
#include <stdio.h>
  
int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p1;
    char* p2;
  
    // Find first occurrence of s2 in s1
    p1 = ft_strnstr(s1, s2, 6);
    p2 = ft_strnstr(s1, s2, 12);
  
    // Prints the result
    if (p1) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p1);
    }
	else
        printf("String not found\n");

	if (p2) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p2);
    }
	else
        printf("String not found\n");
  
    return 0;
}