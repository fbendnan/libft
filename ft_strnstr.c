/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:31:54 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/17 11:42:23 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i = 0;
    size_t j = 0;

    if(little[0] == '\0')
        return big;

    while (i < len)
    {
        
        while (little[j])
        {
            j++;
        }
        
    }
    return NULL;
}