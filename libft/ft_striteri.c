/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:59:27 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/11 18:00:28 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*void ft(unsigned int a, char *b)
{
	if (*b >= 'a' && *b <= 'z')
		*b -= 32;
}
*/
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		 f(i, &s[i]);
		 i++;
	}
}
/*
int main()
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);

    ft_striteri(str, ft);

    printf("Modified string: %s\n", str);

    return 0;
}
*/
