/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:24:33 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/22 20:19:00 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    size_t i        = 0;
    size_t j        = 0;
    size_t totalsize = 0;
    char *str;
    
    
    if(!s1 && !s2)
        return (NULL);
    
    else if(!s1)
    {
        totalsize = ft_strlen(s2);
        str = malloc(totalsize + 1);
        if(!str)
            return NULL;
        while(s2[j])
        {
            str[i] = s2[j];
            i++;
            j++;
        }
    }
    else if(!s2)
    {
        totalsize =  ft_strlen(s1);
        str = malloc(totalsize + 1);
        if(!str)
            return NULL;
        while(s1[j])
        {
            str[i] = s1[j];
            j++;
            i++;
        }
    }
    else
    {
        totalsize =  ft_strlen(s1) + ft_strlen(s2);
        str = malloc(totalsize + 1);
        if(!str)
            return NULL;
        while(s1[j])
        {
            str[i] = s1[j];
            j++;
            i++;
        }
        j = 0;
        while(s2[j])
        {
            str[i] = s2[j];
            i++;
            j++;
        }
    }
    
    str[i] = '\0';
    return str;
}