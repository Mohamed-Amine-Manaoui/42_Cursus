/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:33:42 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/12/08 10:33:47 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putcharc(int c);
int	ft_putstrc(char *s);
int	ft_strchrc(const char *s, int c);
int	ft_putnbrc(int nb);
int	ft_putnbrc_base(unsigned long nbr, char *base);
int	ft_printf(const char *format, ...);

#endif
