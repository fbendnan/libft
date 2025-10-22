/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:41:13 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/21 18:55:03 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    int ft_atoi(const char *nptr){
        int i = 0;
        int n = 0;
        short int sign = 1;
        
        while (nptr[i] == ' ' || nptr[i] == '\t' ||
             nptr[i] == '\n' || nptr[i] == '\r' ||
              nptr[i] == '\v' || nptr[i] == '\f')
        {
            i++;
        }
        
        if(nptr[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(nptr[i] == '+')
        {
            sign = 1;
            i++;
        }

        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
            n *= 10 + ((int)nptr[i] - 48);
            i++;
        }
        return n * sign;
    }