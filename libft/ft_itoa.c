/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:28:47 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/10 21:33:02 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

int	ft_count(int n)
{
	int		temp;
	int		count;
	char	*ptr;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_while(char *ptr, int n, int i)
{
	while (i >= 0)
	{
		ptr[i] = ((n % 10) + '0');
		n /= 10;
		i--;
	}
}

char	*ft_allocate(int n)
{
	char	*ptr;

	ptr = (char *)malloc(ft_count(n));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		temp;
	int		count;
	int		i;
	int		is_negative;
	char	*ptr;

	count = ft_count(n);
	ptr = ft_allocate(n);
	is_negative = 0;
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	if (n == -2147483648)
		return (ft_strdup((const char *)n));
	ptr[count] = '\0';
	i = count - 1;
	ft_while(ptr, n, i);
	if (is_negative)
		ptr[0] = '-';
	return (ptr);
}
