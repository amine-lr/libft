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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;
	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*int main(void)
{
    size_t num = 4;
    int    *my_arr;
    int    *real_arr;
    size_t i;

    my_arr = (int *)ft_calloc(num, sizeof(int));
    real_arr = (int *)calloc(num, sizeof(int));

    if (!my_arr || !real_arr)
        return (1);

    printf("ft_calloc: ");
    for (i = 0; i < num; i++)
        printf("[%d] ", my_arr[i]); // Should all be 0

    printf("\nreal_calloc: ");
    for (i = 0; i < num; i++)
        printf("[%d] ", real_arr[i]); // Should all be 0
    printf("\n");

    free(my_arr);
    free(real_arr);
    return (0);
}*/