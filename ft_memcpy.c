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
	char	*dst_c;
	char	*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	if (!src || !dst)
		return (NULL);
	while (n-- > 0)
	{
		*dst_c++ = *src_c++;
	}
	return (dst);
}
/*int main()
{
    char    *src = "Bla bla bla";
    char    *dst;

	dst = malloc(10 * sizeof(char));
    ft_memcpy(dst, src, 10);
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
    return (0);
}*/
