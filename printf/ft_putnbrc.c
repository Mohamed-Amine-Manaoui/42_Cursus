/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:33:07 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/12/08 10:33:14 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrc(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		count += ft_putcharc('-');
		nb = -nb;
		count += ft_putnbrc(nb);
	}
	else if (nb >= 0 && nb <= 9)
	{
		count += ft_putcharc(nb + 48);
	}
	else if (nb >= 10)
	{
		count += ft_putnbrc(nb / 10);
		count += ft_putnbrc(nb % 10);
	}
	return (count);
}
