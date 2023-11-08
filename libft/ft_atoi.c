/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:38:33 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 21:40:36 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	sign;
	size_t	result;

	i = 0;
	sign = 1;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main() {
    const char *str = "-+12345";
    int number = ft_atoi(str);

    printf("Parsed integer: %d\n", number);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 12345; // Chiffre de test
    char *str = ft_itoa(num);

    if (str != NULL) {
        printf("Nombre: %d\nChaîne: %s\n", num, str);
        free(str); // Assurez-vous de libérer la mémoire allouée
    } else {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}
*/
/*

void skip_norme(char *ptr, int size, int sign ,int n)
{
       int  i;
    i = size - 1;
	ptr[i + 1] = '\0';
	while (i >= 0)
	{
		ptr[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	if (ptr[i] == '-')
			ptr[0] = '-';
}
char	*ft_itoa(int n)
{
	int		sign;
	int		temp;
	int		size;
	char	*ptr;
 
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	temp = n;
	size = 1;
	while (temp > 9)
	{
		temp /= 10;
		size++;
	}
	ptr = (char *)malloc(size + 2);
	if (ptr == NULL)
		return (0);
            skip_norme(ptr, size, sign, n);
	return (ptr);
}
*/