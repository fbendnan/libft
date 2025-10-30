/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:36:08 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 20:42:49 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_number_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill_string(char *str, int len_n, long n)
{
	if (n == 0)
		str[0] = '0';
	while (n > 9)
	{
		str[--len_n] = (n % 10) + '0';
		n = n / 10;
	}
	str[--len_n] = n + '0';
}

char	*ft_itoa(int n)
{
	size_t	len_n;
	char	*str;
	long	nb;

	nb = n;
	len_n = count_number_len(nb);
	str = malloc(len_n * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len_n] = '\0';
	ft_fill_string(str, len_n, nb);
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	 printf("%s", ft_itoa(-2135644442));
// }