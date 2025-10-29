/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:15:29 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 12:46:20 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    size_t i = 0;
    char *str;

    if(!s)
        return (NULL);
    size_t len_s = ft_strlen(s);

    if(start > len_s)
        return NULL;
    if(len > len_s - start)
        len = len_s - start;

    str = malloc(len + 1);

    while((len > i ) && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }    
    str[i] = '\0';
    return (str);
}