/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:56:23 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/23 09:13:11 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s){
	size_t str_len;
	size_t 		i;
	char 	*s_cpy;
	i = 0;
	str_len = ft_strlen(s);
	s_cpy = malloc(str_len + 1);

	if(!s_cpy)
		return (NULL);
			
	while(str_len > i && s[i])
	{
		s_cpy[i] = s[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}