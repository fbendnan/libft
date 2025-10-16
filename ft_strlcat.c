/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:31:06 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 22:44:41 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){
    size_t sLen = ft_strlen(src);
    size_t dLen = ft_strlen(dst);
    size_t i = 0;

    if(size <= dLen)
        return sLen + dLen;

        while(src[i] && size - 1 >= i + dLen )
        {
            dst[dLen + i] = src[i];
            i++;
        }
        dst[dLen + i] = '\0';
        
    return sLen + dLen;
}