/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:04:32 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/09 13:34:17 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c > 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main()
{
	char	A = 'A';
	char	B = 'g';
	char	c = '5';
	char	d = '-';

	printf("%d.\n", ft_isalpha(A));
	printf("%d.\n", ft_isalpha(B));
	printf("%d.\n", ft_isalpha(c));
	printf("%d.\n", ft_isalpha(d));
	return (0);
}*/
