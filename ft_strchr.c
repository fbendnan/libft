/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:19:45 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 15:29:57 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char	*)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}