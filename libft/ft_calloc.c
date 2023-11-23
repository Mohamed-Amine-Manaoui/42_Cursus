/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:19:43 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/21 10:16:30 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*ptr;

	if (size * num / size != num && size != 0)
		return (0);
	ptr = malloc(size * num);
	if (ptr == NULL)
		return NULL;
	if (ptr != 0)
		ft_bzero(ptr, size * num);
	return (ptr);
}
