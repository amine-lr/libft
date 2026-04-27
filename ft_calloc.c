/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:23:23 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 14:23:28 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t elements_size)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = malloc(num_elements * elements_size);
	if (!temp)
		return (NULL);
	while (i < num_elements * elements_size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/*int	main()
{
	size_t	num = 6;
	size_t	size = sizeof(char) ;
	printf("%s\n", (char *)ft_calloc(num, size));
}*/