/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:19:45 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/16 23:19:57 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c){
    int i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
            return (&s[i]);
        i++;
    }
    if((char) c == '\0')
        return (&s[i]);
    return 0;
}