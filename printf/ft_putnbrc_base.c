/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrc_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:34:14 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/12/08 10:34:20 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbrc_base(unsigned long nbr, char *base)
{
	int				count;
	unsigned long	len_b;

	count = 0;
	len_b = ft_strlen(base);
	if (nbr < len_b)
		count += ft_putcharc(base[nbr]);
	else
	{
		count += ft_putnbrc_base(nbr / len_b, base);
		count += ft_putcharc(base[nbr % len_b]);
	}
	return (count);
}
