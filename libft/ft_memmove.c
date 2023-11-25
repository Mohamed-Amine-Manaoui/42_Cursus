/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:45:35 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/23 16:47:26 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srcc;

	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (!destt && !srcc)
		return (NULL);
	if (dest > srcc)
	{
		while (n > 0)
		{
			destt[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, srcc, n);
	}
	return (dest);
}
