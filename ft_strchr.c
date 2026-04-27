/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:14:07 by molariou          #+#    #+#             */
/*   Updated: 2026/04/27 21:57:49 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i++;
	}
	if (a == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*int main()
{
    char c = 'l';
    const char *s= "amine bla";

	if (!s)
		printf ("NULL");
    char    *rslt = ft_strchr(s, c);
    if (rslt != NULL)
        printf("Character %c found in %s: %s\n", c, s, rslt);
    else
        printf("Character %c not fount in %s\n", c, s);
    return (0);
}*/
