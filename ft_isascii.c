/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:54:52 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/15 00:04:19 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isascii(int a){
	if(a >= 0 && a <= 127)
		return 1;
	return 0;
}

int main(void){
	char c;

	printf("write a char to check if is ascii or not\n");
	scanf("%c",&c);

	printf("this test for my function: \n");

	if(ft_isascii(c))
		printf("is ascii !\n");
	else
		printf("this is not ascii !\n");

	printf("this is an original ascii function :\n");
	if(isascii(c))
                printf("is ascii!\n");
        else
                printf("this is not ascii !\n");
}