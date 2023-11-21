/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:17:37 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/21 12:46:40 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// int main ()
// {
//     char *src = "12344949=7";
//     char dest[10];
//     ft_memcpy(dest, src, 8);
//     printf("%s\n",dest);

// 	char *src1 = "12344949=7";
//     char dest1[10];
//     memcpy(dest1, src1, 8);
//     printf("%s",dest1);
// }
