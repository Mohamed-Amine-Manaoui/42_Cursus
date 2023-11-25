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

// int main ()
// {
// 	char *src = "Mohamed Amine";
//  	char dest[20];
//  	size_t str = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("----->%zu\n",str);
// }
