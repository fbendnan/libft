/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:33:38 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 12:14:22 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    size_t i = 0;
    
    unsigned char *d = dest;
    unsigned char *s =(unsigned char *) src;
    
    if(!dest && !src)
        return(NULL);
        
    if(d <= s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else{
        while (i < n )
        {
            d[n-1] = s[n-1];
            n--;
        }
    }
    
    return dest;
}