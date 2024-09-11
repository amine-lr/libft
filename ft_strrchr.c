/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:21:12 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/11 12:47:01 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	size_t	i;

	i = ft_strlen (s);
	while (i > 0)
	{
		i--;
		if (s[i] == c)
			return ((char *) &s[i]);
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*int main()
{
    char c = 'l';
    const char *s= "bla bla";
    char    *rslt = ft_strrchr(s, c);
    
    if (rslt != NULL)
        printf("Character %c found in %s: %s\n", c, s, rslt);
    else
        printf("Character %c not fount in %s\n", c, s);
    return (0);
}*/
