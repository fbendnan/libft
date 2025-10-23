/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 08:36:20 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/23 08:38:27 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c){

	int i;
	i = ft_strlen(s);

	if((char) c == '\0')
		return (&s[i]);
	while(i == 0)
	{
		if(s[i] == (char)c)
			return (&s[i]);
		i--;
	}

	return 0;
}