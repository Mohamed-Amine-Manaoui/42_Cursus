/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:43:02 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/11 16:36:08 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (big == NULL && little == NULL)
		return (NULL	);
	if (little[j] == '\0')
	{
		return ((char *)big);
	}
	while (big[i])
	{
		while (i + j < len && big[i + j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int main ()
	{
		char* big = NULL;
		char *little = NULL;
		// char *result = ft_strnstr(big, little,5);
		printf("%s",ft_strnstr(big, little,5));
		return 0;
	}
*/
/*
#include <string.h>
int main()
{
    const char *haystack = "Hello, world! This is a test string.";
    const char *needle1 = "world";
    const char *needle2 = "universe";
    const char *needle3 = "";
    const char *needle4 = "This";
    const char *needle5 = "test";
    size_t len = strlen(haystack);

    char *result1 = ft_strnstr(haystack, needle1, len);
    if (result1 != NULL)
    {
        printf("Substring found: %s\n", result1);
    }
    else
    {
        printf("Substring not found.\n");
    }

    char *result2 = ft_strnstr(haystack, needle2, len);
    if (result2 != NULL)
    {
        printf("Substring found: %s\n", result2);
    }
    else
    {
        printf("Substring not found.\n");
    }

    char *result3 = ft_strnstr(haystack, needle3, len);
    if (result3 != NULL)
    {
        printf("Substring found: %s\n", result3);
    }
    else
    {
        printf("Substring not found.\n");
    }

    char *result4 = ft_strnstr(haystack, needle4, len);
    if (result4 != NULL)
    {
        printf("Substring found: %s\n", result4);
    }
    else
    {
        printf("Substring not found.\n");
    }

    char *result5 = ft_strnstr(haystack, needle5, len);
    if (result5 != NULL)
    {
        printf("Substring found: %s\n", result5);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}*/
