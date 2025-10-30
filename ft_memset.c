/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:18:12 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 11:27:16 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void	*s, int	c, size_t	n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char	*)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(){
//	 int tab[] = {1337, 2, 3, 4, 5};
//	 char *s = (char *)&tab[0];
    
//     memset(s, 1, 1);
//     memset(s+1, 0, 1);
//     printf("%d\n", tab[0]);

// }