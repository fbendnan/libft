/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:33:38 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 14:22:41 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void	*dest, const void	*src, size_t	len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = (unsigned char *)src;
	if ((!dest && !src))
		return (NULL);
	if (d <= s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (i < len )
		{
			d[len-1] = s[len-1];
			len--;
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "hello world";
	char *c = memmove(s, s, 3);
	printf("%s \n", c);

	 	char *s = "hello world";
	 char *c = memmove("hello world", "hello world", 3);
	 printf("%s \n", c);
	 char *h = ft_memmove(s, s, 3);
	 printf("%s", h);
}*/