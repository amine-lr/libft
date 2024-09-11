/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:14:13 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/11 10:46:20 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != ('\0'))
		i++;
	return (i);
}

/*int main()
{
    char *s ="bla bla";
    int rst = ft_strlen(s);

    printf ("the lenght of s is %d\n", rst);
    return (0);
}*/
