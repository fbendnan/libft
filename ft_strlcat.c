/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:31:06 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 15:20:01 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	if (!dst && !size)
		return (src_len);
	dst_len = ft_strlen(dst);
	if(dst_len < size)
		ft_strlcpy(dst + dst_len, src, size - dst_len);
	if(dst_len > size)
		return (src_len + size);
	return (src_len + dst_len);
}