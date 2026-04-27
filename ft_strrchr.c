/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:16:53 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:16:54 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*int main()
{
    char c = 'u';
    const char *s= "NUll";
    char    *rslt = ft_strrchr(s, c);
    
    if (rslt != NULL)
        printf("Character %c found in %s: %s\n", c, s, rslt);
	else
        printf("Character %c not fount in %s\n", c, s);
    return (0);
}*/
