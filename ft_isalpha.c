/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:56:02 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/15 00:04:19 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_isalpha (int c)
{
	if((c >= 97  && c <= 122) || (c >= 65 && c <= 90))
		return 1; 
	return 0;
}

int main(void){
	char b;
	printf("write a char: ");
	scanf("%c",&b);
	if(ft_isalpha(b) == 1)
	{
		printf("this is a char   : %c",b);
	}
	else
		printf("this isn't a char");
}

