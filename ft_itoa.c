/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:24:47 by molariou          #+#    #+#             */
/*   Updated: 2026/04/27 19:54:29 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long n)
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

	nbr = num;
	len = count_size(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	len--;
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
/*int	main()
{
	int n = -2147483648;
	char *res = ft_itoa(n);
	printf("Min Int: %s\n", res); // Must be -2147483648
	free(res);

	int n = 0;
	char *res = ft_itoa(n);
	printf("Zero: [%s]\n", res); // Must be [0], not empty or garbage
	free(res);

	int n = -5;
	char *res = ft_itoa(n);
	printf("Negative: %s\n", res); // Must be -5
	free(res);
}*/