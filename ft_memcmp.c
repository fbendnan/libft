/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:18:10 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/17 09:25:35 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n){
    size_t i = 0;
    unsigned char *s1 = (unsigned char *) str1;
    unsigned char *s2 = (unsigned char *) str2;

    if(n == 0)
        return 0;
    while(n > i){
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}