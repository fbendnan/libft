/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 08:36:20 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 15:50:02 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len_s;

	len_s = ft_strlen(s);
		if((char) c == '\0')
			return ((char	*)(s + len_s));
		while (len_s >= 0)
		{
			if(*(s + len_s) == (char)c)
				return ((char	*)(s + len_s));
			len_s--;
		}
		return (NULL);
}