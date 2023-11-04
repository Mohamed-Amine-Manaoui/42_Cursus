/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:39:40 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/04 15:46:39 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (start > ft_strlen(s) || len == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	ptr = (char *)malloc (len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
    const char *original = "Salam Ana Mohamed Amine";
    unsigned int start = 7;
    size_t length = 3;

    char *result = ft_substr(original, start, length);
    printf("%s",result);
    return (0);
}
*/
