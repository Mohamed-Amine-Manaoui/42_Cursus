/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:18:14 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/22 18:38:42 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}
/*
 
 const char *originalString = "   Hello, World!   ";
    const char *setOfCharsToTrim = " ";

    // Call ft_strtrim to get a trimmed string
    char *trimmedString = ft_strtrim(originalString, setOfCharsToTrim);

    if (trimmedString != NULL) {
        // Print the trimmed string
        printf("Original: \"%s\"\n", originalString);
        printf("Trimmed:  \"%s\"\n", trimmedString);

        // Free the allocated memory for the trimmed string
        free(trimmedString);

  */
