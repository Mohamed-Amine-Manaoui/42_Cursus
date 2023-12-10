/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:31:54 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/12/08 10:32:00 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list list, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putcharc(va_arg(list, int));
	else if (format == 's')
		count = ft_putstrc(va_arg(list, char *));
	else if (format == 'p')
	{
		count = ft_putstrc("0x");
		count += ft_putnbrc_base(va_arg(list, unsigned long),
				"0123456789abcdef");
	}
	else if (format == 'd' || format == 'i')
		count = ft_putnbrc(va_arg(list, int));
	else if (format == 'u')
		count = ft_putnbrc_base(va_arg(list, unsigned int), "0123456789");
	else if (format == 'x')
		count = ft_putnbrc_base(va_arg(list, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		count = ft_putnbrc_base(va_arg(list, unsigned int), "0123456789ABCDEF");
	else
		count = ft_putcharc('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	va_start(list, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			i++;
			if (ft_strchrc("cspdiuxX%", format[i]) == 1)
				count += ft_format(list, format[i]);
		}
		else
			count += ft_putcharc(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
