/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:18:15 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/22 15:03:54 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str){
	size_t i = 0;

	while(str[i] != '\0'){
		i++;
	}
	return i;
}

// #include <stdio.h>

// int main(){
//     printf("%zu", ft_strlen(NULL));
// }