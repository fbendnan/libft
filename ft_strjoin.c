/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:24:33 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 21:10:50 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len1 + len2 + 1);
	while (s2[i])
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + i] = '\0';
	return (str);
}
