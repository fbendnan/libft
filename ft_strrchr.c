/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 08:36:20 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 10:34:57 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if((char) c == '\0')
		return (((char	*)s));
	while(*s)
	{
		if(*s == (char)c)
			return ((char	*)s);
		s--;
	}
	return (0);
}