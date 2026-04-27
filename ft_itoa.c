/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:24:47 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 14:24:48 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	int		len;
	char	*str;
	long	nbr;

	len = count_size(num);
	nbr = num;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		len--;
		nbr /= 10;
	}
	return (str);
}
/*int	main()
{
	int n;

	n = -123;
	printf("%s", ft_itoa(n));
}*/