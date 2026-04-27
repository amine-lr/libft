/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:13:05 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:13:07 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (!c)
		return (0);
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int	main()
{
	char ch = 'r';

	if (!ch)
		printf("NULL");
	else
    	printf("Uppercase of %c is %c\n", ch, ft_toupper(ch));
    return (0);
}*/
