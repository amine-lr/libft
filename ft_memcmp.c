/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:05:59 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/13 14:16:50 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s1_c;
	const unsigned char		*s2_c;
	size_t					i;

	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (0);
		if (s1)
			return (1);
		else
			return (-1);
	}
	i = 0;
	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_c[i] == s2_c[i])
			return (s1_c - s2_c);
		i++;
	}
	return (0);
}
/*int main()
{
    char    *s1 = NULL;
    char    *s2 = NULL;
    int rst = ft_memcmp(s1, s2, 2);
    if (rst == 0)
        printf ("the memory block are equal.\n");
     else if (rst < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");
    return 0;
}*/
