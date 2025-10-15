/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:32:21 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 00:35:49 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n){
    size_t i = 0;
    unsigned char * str = (unsigned char *) s;

    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}