/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:14:20 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:14:21 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	dst = (char *) malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s1, len);
	return (dst);
}
/*int main()
{
    char *s1 = NULL;
    char *copy;

    copy = ft_strdup(s1);
    if (copy)
    {
        printf("Original: %s\n", s1);
        printf("Copy:     %s\n", copy);
        free(copy);
    }
}*/