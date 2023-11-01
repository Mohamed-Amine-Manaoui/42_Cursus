/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:01:44 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 11:03:17 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main() {
    const char *str = "Hello, world!";
    size_t length = ft_strlen(str);

    printf("The length of the string is: %zu\n", length);

    return 0;
}
*/