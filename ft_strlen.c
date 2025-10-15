#include <stddef.h>
#include <stdio.h>
#include <string.h>


size_t ft_strlen(const char *str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

// q