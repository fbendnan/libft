/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:05:57 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 10:41:13 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_existchar(char c,char const* set)
{
	size_t	len_set = ft_strlen(set);
	size_t	i = 0;
	
	while(i < len_set && set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t		start;
	size_t		end;
	size_t		i;
	char	*s1_cpy;

	len_s1 = ft_strlen(s1);
	start = 0;
	end = len_s1;
	i = start;
	if(!s1)
		return (NULL);
	if(!set)
		return (ft_strdup(s1));
	while (ft_existchar(s1[start], set) && start <= len_s1)
		start++;	
	while (ft_existchar(s1[end - 1], set) && end > start)
		end--;
	s1_cpy = malloc(end - start + 1);
	while (end > start + i)
	{
		s1_cpy[i] = s1[start + i];
		i++;
	}
	s1_cpy[start + i] = '\0';
	return (s1_cpy);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", ft_strtrim("aaaaaaa", "a"));
// }
