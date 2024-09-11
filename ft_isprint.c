/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:44:24 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/11 10:46:01 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main()
{
	int	space = ' ';
	int	notprint = 129;

	printf("%d.\n", ft_isprint(space));
	printf("%d.\n", ft_isprint(notprint));
	return (0);
}*/
