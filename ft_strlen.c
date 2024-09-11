/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:14:13 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/10 11:53:30 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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
