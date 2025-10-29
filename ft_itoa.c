/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:36:08 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 11:57:20 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_number_len(int n)
{
	size_t len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return len;
}

char *ft_itoa(int n){
	size_t 	len_n;
	char	*str;
	size_t  i;
	short sign;

	i = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	len_n = count_number_len(n);
	str = malloc(len_n * sizeof(char) + 1);
	
	if(!str)
		return (NULL);
	str[len_n + 1] = '\0';
	while (len_n >= 1)
	{
		str[len_n] = (n % 10) + '0';
		n = n / 10;
		len_n--;
	}
	if(sign == -1)
		str[len_n] = '-';
	else
		str[len_n] = '+';
	return str;
}


#include <stdio.h>
int main()
{
	 printf("%s", ft_itoa(-12378804));
}