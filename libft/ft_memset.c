/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:32:23 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 11:01:03 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
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
    char a[] = "amine";
    memset(a, 'a', 3);
    printf("%s", a);
}
*/
