#include "libft.h"

char *ft_strrchr(const char *s, int c){
    int i = ft_strlen(s);
    if((char) c == '\0')
        return (&s[i]);
    while(i == 0)
    {
        if(s[i] == (char)c)
            return (&s[i]);
        i--;
    }
    return 0;
}