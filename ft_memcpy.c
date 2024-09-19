/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:06:03 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/13 14:24:55 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	if (!src || !dst)
		return (NULL);
	dst_c = (unsigned char *)dst;
	src_c = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c [i];
		i++;
	}
	return (dst);
}
/*int main()
{
    char    *src = NULL;
    char    *dst;

	dst = malloc(10 * sizeof(char));
    ft_memcpy(dst, src, 2);
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
    return (0);
}*/
