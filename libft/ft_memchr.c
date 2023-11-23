/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:13:13 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/22 18:35:13 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((unsigned char *)str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char myMemoryBlock[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int targetValue = 5;

    void *result = memchr(myMemoryBlock, targetValue, sizeof(myMemoryBlock));
        size_t position = (size_t)((char *)result - myMemoryBlock) + 1;

        printf("The byte with value %d was found at position %zu.\n", targetValue, position);
    }

    return 0;
}

   */
