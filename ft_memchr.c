/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:10:40 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:10:40 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	if (!s)
		return (NULL);
	i = 0;
	s_c = (unsigned char *)s;
	while (i < n)
	{
		if (s_c[i] == (unsigned char)c)
			return (s_c + i);
		i++;
	}
	return (NULL);
}
