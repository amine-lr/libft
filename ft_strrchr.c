/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:21:12 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/25 16:56:20 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "tripouille";

	// Test 1: Find 'i' (should find the second 'i')
	printf("Last 'i': %s\n", ft_strrchr(str, 'i'));

	// Test 2: Find 't' (the start)
	printf("Start 't': %s\n", ft_strrchr(str, 't'));

	// Test 3: Find '\0' (the end)
	if (ft_strrchr(str, '\0') == (str + 10))
		printf("Null terminator found! ✓\n");

	// Test 4: Not found
	printf("Not found 'z': %p\n", ft_strrchr(str, 'z'));

	return (0);
}*/
