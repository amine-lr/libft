/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:06:10 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/13 14:20:59 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_c;
	unsigned char	*src_c;
	unsigned char	tmp[];

	i = 0;
	if (!dst && !src)
		return (NULL);
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	while (i < len)
	{
		src_c[i] = tmp[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_c[i] = tmp[i];
		i++;
	}
	return (dst);
}
/*int main()
{
    char    *src = "Hello, world!";
    char dst[20];

    ft_memmove(dst, src, 13);
    printf("Non-overlapping test:\nSource: %s\nDestination: %s\n", src, dst);
    
    return 0;
}*/
