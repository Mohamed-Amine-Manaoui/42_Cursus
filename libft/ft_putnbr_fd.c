/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:14:51 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/13 17:57:28 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, fd);
	}
}

/*
int	main(void)
{
	int	fd;
	int	number;

	// Create a file and obtain a file descriptor
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
	{
		ft_putchar('E'); // Print an error if opening the file fails
		return (1); // Return an error code
	}
	// Example usage of ft_putnbr_fd with the created file descriptor
	number = -47;
	ft_putnbr_fd(number, fd);
	// Close the file descriptor
	close(fd);
	return (0);
}
*/
