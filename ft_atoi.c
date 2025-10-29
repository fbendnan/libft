/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:41:13 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/29 10:25:25 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	short ft_isspace(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' || 
		c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int ft_atoi(const char *nptr){
	int i = 0;
	long n = 0;
	short int sign = 1;
	
	while (ft_isspace(nptr[i]))
		i++;
	
	if(nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]) && nptr[i])
	{
		n = n * 10 + ((int)nptr[i] - 48);
		i++;
	}
	return (int)(n * sign);
}


#include <stdio.h>
int main()
{
	char *str = "333332";
	printf("%d" , ft_atoi(str));
}