/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:01:44 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/19 08:31:27 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void) {
	const char *myString = "";
	size_t length = strlen(myString);
	size_t length1 = ft_strlen(myString);
	printf("The length (orig) of the string is: %zu\n", length);
	printf("The length1 of the string is: %zu\n", length1);
	return (0);
}
*/