/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:17:16 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/16 11:37:28 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n - 1 && ((unsigned char *)ptr1)[i] == ((unsigned char *)ptr2)[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
// int main()
// {
//     char *str = "amine";
//     char *str1 = "bmine";
//     int stri[] = {5, 4};
//     int stri1[] = {5, 3};
//     int a = ft_memcmp(stri,stri1, 5);
//     printf("%d",a);
// }
