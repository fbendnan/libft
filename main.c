#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

int main(void) {
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";

    // Use ft_memset to set first 5 chars to 'A'
    ft_memset(str1, 'A', 5);
    // Use standard memset to set first 5 chars to 'A'
    memset(str2, 'A', 5);

    printf("ft_memset result:  %s\n", str1);
    printf("   memset result:  %s\n", str2);

    return 0;
}