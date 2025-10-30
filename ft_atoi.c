/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:41:13 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/30 22:39:06 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\r') || (c == '\v') || (c == '\f'))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	n;
	short	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]) && nptr[i])
	{
		n = n * 10 + ((int)nptr[i] - 48);
		i++;
	}
	return ((int)(n * sign));
}
