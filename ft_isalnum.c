/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:03:22 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:10 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int main()
{
    int AM = '5';
    int B = '-';
    int D = 'F';
    int S = 'd';

    printf("%d.\n", ft_isalnum(AM));
    printf("%d.\n", ft_isalnum(B));
    printf("%d.\n", ft_isalnum(D));
    printf("%d.\n", ft_isalnum(S));

}*/