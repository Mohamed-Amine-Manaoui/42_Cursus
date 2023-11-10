/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:24:32 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/10 18:49:40 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char ft_ftest(unsigned int a, char b)
{
	if (b >= 'a' && b <= 'z')
		return (b - 32);
	return (b);
}
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char 	*ptr;
	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i,s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main() {
    const char *input_string = "Hello, World!";

    char *result = ft_strmapi(input_string, ft_ftest);


    printf("Chaîne d'origine : %s\n", input_string);
    printf("Nouvelle chaîne   : %s\n", result);

    free(result);

    return 0;
}
*/
