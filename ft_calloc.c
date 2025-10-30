/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:58:14 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 14:32:56 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	unsigned char	*ptr;
	size_t	totalSize;

	if((nmemb != 0) && (size > SIZE_MAX / nmemb))
		return (NULL);
	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if(!ptr)
		return (NULL); 
	ft_bzero(ptr, totalSize);
	return (ptr);
}

