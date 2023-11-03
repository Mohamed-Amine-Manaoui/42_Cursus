/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:45:06 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 13:48:11 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	leng;

	i = 0;
	leng = ft_strlen(src);
	if (size == 0)
		return (leng);
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (leng);
}
/*
int main() {
    char dest[20]; 
    const char *src = "Bonjour, monde !"; 
    size_t size = 10;

    size_t copied = strlcpy(dest, src, size);

    printf("Chaine copiee : %s\n", dest);
    printf("Longueur de la chaine source : %zu\n", copied);

    return 0;
}
*/
