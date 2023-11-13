/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:39:40 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/11 17:59:37 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s || start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		ptr[i] = s[start];
		i++;
		start++;
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
