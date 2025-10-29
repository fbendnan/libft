/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:05:57 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 10:26:56 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_existchar(char c,char const* set)
{
	size_t	len_set = ft_strlen(set);
	int i = 0;
	
	while(i < len_set && set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set){
	size_t	len_s1 = ft_strlen(s1);
	
	int		i = 0;
	// size_t	j;

	// size_t end_i;
	// end_i =len_s1 - 1;
	// short is_exist;
	// char *s1_cpy;
	if(!s1)
		return (NULL);
	if(!set)
		return (ft_strdup(s1));

	while (ft_existchar(s1[i], set))
	{
		i++;
	}
	
		
	while (s1[i])
	{
		
	}
	
	
	// while (s1[start_i])
	// {
	// 	j = 0;
	// 	is_exist = 0;
	// 	while(set[j])
	// 	{
	// 		if(s1[start_i] == set[j])
	// 			is_exist = 1;

	// 		j++;
	// 	}
	// 	if(!is_exist)
	// 		break;
	// 	start_i++;
	// }
	// while (end_i > start_i )
	// {
	// 	j = 0;
	// 	is_exist = 0;
	// 	while(set[j])
	// 	{
	// 		if(s1[end_i] == set[j])
	// 			is_exist = 1;

	// 		j++;
	// 	}
	// 	if(!is_exist)
	// 		break;
	// 	end_i--;
	// }
	// if(end_i < start_i)
	// {
	// 	return(ft_calloc(1,1));
	// }
			
	
	// s1_cpy = malloc(end_i - start_i + 1 );
	// if(!s1_cpy)
	// 	return (NULL);
		
	// j = 0;
	// while (end_i >= start_i + j)
	// {
	// 	s1_cpy[j] = s1[start_i + j];
	// 	j++;
	// }
	// s1_cpy[j] = '\0';
	// return s1_cpy;


	


	
}
