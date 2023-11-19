/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:32:23 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/19 17:20:46 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memset(void *str, int value, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (char)value;
		i++;
	}
	return (str);
}
/*
int main ()
{
	int *arr[2] = {0, 0};

    memset(arr, 2, 1);
    printf("%d\n", arr);
}
*/
