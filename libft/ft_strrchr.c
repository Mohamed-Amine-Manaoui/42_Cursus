/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:45:17 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/23 20:37:08 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == c)
		return ((char *)(str + i));
	return (0);
}

int main ()
{
	char *str = "Amine";
	char c = 'i';
	char *ptr = ft_strrchr(str, c);
	printf("%s",ptr);
}