#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dst1[10];
    char dst2[10];

    // Test 1: dst size smaller than src
    size_t ret1 = ft_strlcpy(dst1, src, sizeof(dst1));
    size_t ret2 = strlcpy(dst2, src, sizeof(dst2));

    printf("Test 1:\n");
    printf("ft_strlcpy dst: '%s', returned: %zu\n", dst1, ret1);
    printf("strlcpy    dst: '%s', returned: %zu\n", dst2, ret2);

    // Test 2: dst size larger than src
    char dst3[20];
    char dst4[20];
    size_t ret3 = ft_strlcpy(dst3, src, sizeof(dst3));
    size_t ret4 = strlcpy(dst4, src, sizeof(dst4));

    printf("\nTest 2:\n");
    printf("ft_strlcpy dst: '%s', returned: %zu\n", dst3, ret3);
    printf("strlcpy    dst: '%s', returned: %zu\n", dst4, ret4);

    // Test 3: dst size zero
    char dst5[5] = "init";
    char dst6[5] = "init";
    size_t ret5 = ft_strlcpy(dst5, src, 0);
    size_t ret6 = strlcpy(dst6, src, 0);

    printf("\nTest 3 (size=0):\n");
    printf("ft_strlcpy dst: '%s', returned: %zu\n", dst5, ret5);
    printf("strlcpy    dst: '%s', returned: %zu\n", dst6, ret6);

    return 0;
}