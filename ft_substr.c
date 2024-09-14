/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:38:51 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/14 15:27:26 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = (char *)malloc(len +1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/*int main()
{
	char str[] = "AMine";
	int start = 1;
	size_t len = 2;
	printf("%s\n",ft_substr(str,start,len));
}*/