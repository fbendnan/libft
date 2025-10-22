/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:05:57 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/23 00:17:39 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set){

	size_t len_s1 = ft_strlen(s1);
	size_t len_set = ft_strlen(set);
	size_t i = 0;
	size_t j = 0;
	size_t t = 0;
	char *s1cpy = malloc(len_s1 + 1);
	if(!s1cpy)
	return NULL;

	bool isexist = false;
	if(!s1cpy)
		return NULL;
	while(i < len_s1 && s1[i])
	{
		j = 0;
		while(j < len_set && set[j])
		{
			if(s1[i] == set[j])
			{
				isexist = true;
			}
			j++;
		}
		if(!isexist)
		{
			s1cpy[t] = s1[i];
			t++;
		}
		isexist = false;
		i++;
	}
	s1cpy[t] = '\0';

	return s1cpy;
}