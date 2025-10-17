/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:53:55 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/17 09:16:34 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned char * str = (unsigned char *) s;
    
    size_t i = 0;
    while (i < n)
    {
        if(str[i] == (unsigned char) c)
            return (void *) &str[i];
        i++;
    }
    return 0;
}