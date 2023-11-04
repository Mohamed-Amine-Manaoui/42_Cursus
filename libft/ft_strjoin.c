/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:23:55 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/04 18:27:08 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (0);
	ptr = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, (char *)s1, ft_strlen(s1) + 1);
	ft_strcat(ptr, (char *)s2);
	return (ptr);
}
/*
int main() {
    // Test with valid strings
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    printf("Concatenated string: %s\n", result);
    free(result);

    // Test with one NULL string
    const char *nullStr = NULL;
    result = ft_strjoin(s1, nullStr);
    if (result == NULL) {
        printf("Result is NULL for one NULL input.\n");
    } else {
        printf("Concatenated string: %s\n", result);
        free(result);
    }

    // Test with both NULL strings
    result = ft_strjoin(nullStr, nullStr);
    if (result == NULL) {
        printf("Result is NULL for both NULL inputs.\n");
    } else {
        printf("Concatenated string: %s\n", result);
        free(result);
    }

    // Test with empty strings
    const char *emptyStr1 = "";
    const char *emptyStr2 = "";
    result = ft_strjoin(emptyStr1, emptyStr2);
    printf("Concatenated string: %s\n", result);
    free(result);

    // Test with a long string
    const char *longStr = "This is a very long string. ";
    result = ft_strjoin(longStr, s2);
    printf("Concatenated string: %s\n", result);
    free(result);

    return 0;
}*/