/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:13:46 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 18:15:57 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
/*
int main() {
    const char *str1 = "amine";
    const char *str2 = "bmina";
    int n = 2;

    int result = ft_strncmp(str1, str2, n);
    printf("%d",result);
}
*/
