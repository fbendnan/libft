/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:31:06 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/23 09:28:09 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){
	size_t src_len;
	size_t dst_len;
	size_t		i;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i 		= 0;

	if(size <= dst_len)
		return (src_len + dst_len);

		while(src[i] && size - 1 >= i + dst_len )
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}