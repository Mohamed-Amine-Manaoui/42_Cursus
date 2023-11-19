/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:01:17 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/17 11:55:49 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = 0;
	slen = ft_strlen(src);
	if (dest == NULL && size ==0)
	return slen;
	while (dest[i] && i < size)
	{
		i++;
	}
	if (i == size)
	{
		return (i + slen);
	}
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + slen);
}
#include <string.h>
int main ()
{
	// printf("%lu\n",strlcat(NULL,"amin",0));
	printf("%lu\n",ft_strlcat(NULL,"amin",0));
}