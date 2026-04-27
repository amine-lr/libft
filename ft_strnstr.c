/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:16:36 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:16:37 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	str2_len;

	if (!str1)
		return (NULL);
	str2_len = ft_strlen(str2);
	if (*str2 == '\0' || str2_len == 0)
		return ((char *)str1);
	while (*str1 != '\0' && len >= str2_len)
	{
		if (ft_strncmp(str1, str2, str2_len) == 0)
			return ((char *)str1);
		str1++;
		len--;
	}
	return (NULL);
}
