/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:50:41 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/24 00:47:41 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count_words(char *s, char c){
	short	inside_word;
	size_t	words;
	
	words = 0;
	while (*s)
	{
		inside_word = 0;
		while (*s == c && *s)
		{
			s++;
		}
		while (*s != c && *s)
		{
			if(!inside_word)
			{
				words++;
				inside_word = 1;
			}
			s++;
		}
	}
	return words;
}

int	safe_malloc(char **str, size_t position, size_t len)
{
	size_t	i;

	i = 0;
	str[position] = malloc(len + 1);
	if(!(str[position]))
	{
		while (position > i)
		{
			free(str[i]);
			i++;
		}
		free(str);
		return (0);
	}
	return (1);
}

char **ft_fill(char **str, char *s, char c)
{
	size_t	len;
	size_t	i;
	i = 0;
	
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
		{
			s++;
		}
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if(len)
		{
			if(safe_malloc(str, i, len))
			{
				ft_strlcpy(str[position],s[], len + 1);
			}
			i++;
		}
		
	}
	
}

char **ft_split(char const *s, char c){
	size_t words_num;
	char 	**str;

	if(!s)
		return NULL;
	
	words_num = ft_count_words(s, c);
	str = malloc((words_num + 1) * sizeof((char *)));

	if(!str)
		return (NULL);
	
	ft_fill(str, s, c);
	
	return str;
}

// int main(void) {

//     printf("%zu \n" , ft_count_words("   hello  here   h", ' '));

// }