/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:18:12 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 00:27:31 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n){
    size_t i = 0;
    unsigned char *ptr = (unsigned char *) s;

    while (i < n ){
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}