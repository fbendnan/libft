/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:58:14 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 16:06:48 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size){
	size_t			i;
	unsigned char	*ptr;
	size_t	totalSize;

	i = 0;
	if (size == 0)
		return (NULL);	
	if((nmemb != 0) && (nmemb > SIZE_MAX / size))
		return (NULL);
	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if(!ptr)
		return (NULL); 
	ft_bzero(ptr, totalSize);
	return (ptr);
}

