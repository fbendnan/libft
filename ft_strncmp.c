/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:02:15 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/17 08:43:31 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n){
    size_t i = 0;
    unsigned char *s1 = (unsigned char *) str1;
    unsigned char *s2 = (unsigned char *) str2;
    
    while(n > i)
    {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        if(s1[i] == '\0')
            return 0;
        i++;
    }
    return 0;
}