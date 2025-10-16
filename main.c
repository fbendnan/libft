#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

// int main(void) {
//     char str1[20] = "Hello, World!";
//     char str2[20] = "Hello, World!";

//     // Use ft_memset to set first 5 chars to 'A'
//     ft_memset(str1, 'A', 5);
//     // Use standard memset to set first 5 chars to 'A'
//     memset(str2, 'A', 5);

//     printf("ft_memset result:  %s\n", str1);
//     printf("   memset result:  %s\n", str2);

//     return 0;
// }



// int main() {
//     char src1[] = "Hello, World!";
//     char dest1[20];
//     char src2[] = "Hello, World!";
//     char dest2[20];

//     // Test 1: Normal usage, no overlap
//     printf("Test 1:\n");
//     ft_memmove(dest1, src1, 13);
//     memmove(dest2, src2, 13);

//     printf("ft_memmove result: %s\n", dest1);
//     printf("memmove    result: %s\n", dest2);

//     // Test 2: Overlapping regions (dest before src)
//     char overlap[] = "1234567890";
//     printf("\nTest 2 (overlap, dest < src):\n");
//     ft_memmove(overlap + 2, overlap, 5);
//     printf("ft_memmove result: %s\n", overlap);

//     // Reset overlap for original memmove
//     strcpy(overlap, "1234567890");
//     memmove(overlap + 2, overlap, 5);
//     printf("memmove    result: %s\n", overlap);

//     // Test 3: Overlapping regions (dest after src)
//     strcpy(overlap, "1234567890");
//     printf("\nTest 3 (overlap, dest > src):\n");
//     ft_memmove(overlap, overlap + 2, 5);
//     printf("ft_memmove result: %s\n", overlap);

//     strcpy(overlap, "1234567890");
//     memmove(overlap, overlap + 2, 5);
//     printf("memmove    result: %s\n", overlap);

//     return 0;
// }


int main() {
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "Hello, World!";
    char dest2[20];

    // Test 1: Normal copying of string
    printf("Test 1:\n");
    ft_memcpy(dest1, src1, strlen(src1) + 1); // +1 to copy null terminator
    memcpy(dest2, src2, strlen(src2) + 1);

    printf("ft_memcpy result: %s\n", dest1);
    printf("memcpy    result: %s\n", dest2);

    // Test 2: Copy part of the string
    printf("\nTest 2:\n");
    ft_memcpy(dest1, src1 + 7, 5); // Copy "World"
    dest1[5] = '\0';               // Null terminate manually
    memcpy(dest2, src2 + 7, 5);
    dest2[5] = '\0';

    printf("ft_memcpy result: %s\n", dest1);
    printf("memcpy    result: %s\n", dest2);

    // Test 3: Copy binary data (including zero bytes)
    unsigned char bin_src[6] = {1, 2, 0, 4, 5, 6};
    unsigned char bin_dest1[6];
    unsigned char bin_dest2[6];

    ft_memcpy(bin_dest1, bin_src, 6);
    memcpy(bin_dest2, bin_src, 6);

    printf("\nTest 3 (binary data):\n");
    printf("ft_memcpy: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", bin_dest1[i]);
    }
    printf("\nmemcpy:    ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", bin_dest2[i]);
    }
    printf("\n");

    return 0;
}