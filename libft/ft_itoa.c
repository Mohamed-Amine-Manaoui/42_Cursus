/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:28:47 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/05 11:40:47 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
int ft_count(int n)
{
    int temp;
    int count;
    char *ptr;

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
    return count;
}

char *ft_itoa(int n)
{
    int temp;
    int count;
    char *ptr;
    int i;
    int is_negative;

    count = ft_count(n);
    ptr = (char *)malloc(count +1);
    is_negative = 0;

    if (n < 0)
    {
        n = -n;
        is_negative = 1;
    }
    ptr[count] = '\0';
    i = count - 1;
    while (i >=0)
    {
        ptr[i] =((n % 10) + '0');
        n/= 10;
        i--;
    }
    if(is_negative)
        ptr[0] = '-';
    return (ptr);
}
/*
int main() {
    int num1 = 0;

    char *str1 = ft_itoa(num1);
        printf("Number: %d, String: %s\n", num1, str1);
        free(str1);
    }
*/