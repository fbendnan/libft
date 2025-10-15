/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:34:45 by fbendnan          #+#    #+#             */
/*   Updated: 2025/10/15 00:04:19 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isdigit (int c)
{
        if(c <= 57 && c >= 48)
                return 1;
        return 0;
}

// int main(void){
//         char b;
//         printf("write a char number: ");
//         scanf("%c",&b);
//         if(ft_isdigit(b) == 1)
//         {
//                 printf("your char is a number : %c",b);
//         }
//         else
//                 printf("your char isn't a number");
// }