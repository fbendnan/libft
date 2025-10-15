/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:34:36 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/15 00:04:19 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalnum (int c)
{
        if((c >= 97  && c <= 122) || (c >= 65 && c <= 90) || (c <= 57 && c >= 48))
                return 1;
        return 0;
}

// int main(void){
//         char b;
//         printf("write a char: ");
//         scanf("%c",&b);
//         if(ft_isalnum(b) == 1)
//         {
//                 printf("this is a alpha-numeric char : %c",b);
//         }
//         else
//                 printf("this isn't a alpha-numeric char");
// }