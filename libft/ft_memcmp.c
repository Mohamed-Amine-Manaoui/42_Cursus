/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:17:16 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/03 09:13:06 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    // Test cases

    // Test case 1: Equal strings
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    int result1 = ft_memcmp(str1, str2, 5);
    printf("Test case 1: %d\n", result1); // Expected output: 0

    // Test case 2: Different strings, str1 < str2
    const char *str3 = "Apple";
    const char *str4 = "Banana";
    int result2 = ft_memcmp(str3, str4, 5);
    printf("Test case 2: %d\n", result2); // Expected output: a negative value

    // Test case 3: Different strings, str1 > str2
    const char *str5 = "Car";
    const char *str6 = "Bus";
    int result3 = ft_memcmp(str5, str6, 3);
    printf("Test case 3: %d\n", result3); // Expected output: a positive value

    // Test case 4: Comparing parts of a longer string
    const char *str7 = "Hello World";
    const char *str8 = "Hello";
    int result4 = ft_memcmp(str7, str8, 5);
    printf("Test case 4: %d\n", result4); // Expected output: 0

    // Test case 5: Comparing arrays of integers
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};
    int result5 = ft_memcmp(arr1, arr2, sizeof(arr1));
    printf("Test case 5: %d\n", result5); // Expected output: a negative value

    return 0;
}*/
