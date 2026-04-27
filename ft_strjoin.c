/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molariou <molariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:15:01 by molariou          #+#    #+#             */
/*   Updated: 2026/04/25 13:15:03 by molariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	tot_len;
	size_t	len_s1;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	tot_len = len_s1 + ft_strlen(s2);
	str = (char *)malloc(tot_len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, tot_len + 1);
	return (str);
}
/*t main()
{
    char *s1 = "Brouno";
    char *s2 = "Black";
    char *res = ft_strjoin(s1, s2);
    
    if (res)
    {
        printf("%s\n", res);
        free(res); // Clean up!
    }
    return (0);
}*/