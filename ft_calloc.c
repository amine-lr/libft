/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:05 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/13 18:21:18 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t elements_size)
{
	unsigned char	tot_size;
	void			*dst;

	tot_size = num_elements * elements_size;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
/*int	main()
{
	size_t	num = 6;
	size_t	size = sizeof(char) ;
	printf("%s\n", (char *)ft_calloc(num, size));
}*/