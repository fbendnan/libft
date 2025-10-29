/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:54:18 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 14:54:18 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmapi(char const *s, char (*func)(unsigned int, char))
{
	char	*result;
	int		i;

	i = 0;
	if (s == NULL || func == NULL)
		return (NULL);
	i = ft_strlen(s);
	result = malloc(sizeof(char) * i + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = func(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
