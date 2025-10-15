/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:38:00 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 00:44:33 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t i = 0;
    
    if(!dest && !src)
        return(NULL);
    while(i < n){
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dest;
}