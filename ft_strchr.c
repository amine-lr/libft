/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:20:08 by mlarioui          #+#    #+#             */
/*   Updated: 2024/09/10 12:57:15 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, char c)
{
	size_t	i;
	char	a;

	i = 0;
	a = (char)c;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i++;
	}
	if (a == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*int	main()
{
    // Test case 1: Character is present
    const char *str1 = "Hello, World!";
    char c1 = 'W';
    char *result1 = ft_strchr(str1, c1);
    if (result1 != NULL)
        printf("Test 1: Found '%c' in \"%s\": \"%s\"\n", c1, str1, result1);
    else
        printf("Test 1: '%c' not found in \"%s\"\n", c1, str1);

    // Test case 2: Character is not present
    const char *str2 = "Hello, World!";
    char c2 = 'Z';
    char *result2 = ft_strchr(str2, c2);
    if (result2 != NULL)
        printf("Test 2: Found '%c' in \"%s\": \"%s\"\n", c2, str2, result2);
    else
        printf("Test 2: '%c' not found in \"%s\"\n", c2, str2);

    // Test case 3: Searching for the null terminator
    const char *str3 = "Hello, World!";
    char c3 = '\0';
    char *result3 = ft_strchr(str3, c3);
    if (result3 != NULL)
        printf("Test 3: Found '\\0' in \"%s\" at position: %ld\n", str3, result3 - str3);
    else
        printf("Test 3: '\\0' not found in \"%s\"\n", str3);

    // Test case 4: Empty string
    const char *str4 = "";
    char c4 = ' ';
    char *result4 = ft_strchr(str4, c4);
    if (result4 != NULL)
        printf("Test 4: Found '%c' in \"%s\": \"%s\"\n", c4, str4, result4);
    else
        printf("Test 4: '%c' not found in \"%s\"\n", c4, str4);
    return 0;
}*/
