/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:33:38 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 22:59:38 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
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
		ft_memcpy(d, s, len);
	else
	{
		while (i < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "hello world";
// 	char str2[10];
// 	printf("%s", (char*)ft_memmove(str2, str, 5));
// }