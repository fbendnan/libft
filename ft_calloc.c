/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:58:14 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/22 13:15:25 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size){
    size_t i = 0;
    
    if(nmemb != 0 && size > SIZE_MAX / nmemb)
        return NULL;

    size_t totalSize = nmemb * size;
    unsigned char *ptr = malloc(totalSize);
    
    if(!ptr)
        return NULL;

    ft_bzero(ptr, totalSize);
    return ptr;
}

