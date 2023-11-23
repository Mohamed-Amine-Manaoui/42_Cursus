/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:28:47 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/22 18:40:42 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

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
	return (count);
}

static void	ft_while(char *ptr, int n, int i)
{
	while (i >= 0)
	{
		ptr[i] = ((n % 10) + '0');
		n /= 10;
		i--;
	}
}

static char	*ft_allocate(int n)
{
	char	*ptr;

	ptr = (char *)malloc(ft_count(n) + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		count;
	int		i;
	int		is_negative;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	ptr = ft_allocate(n);
	if (ptr == NULL)
		return (0);
	is_negative = 0;
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	ptr[count] = '\0';
	i = count - 1;
	ft_while(ptr, n, i);
	if (is_negative)
		ptr[0] = '-';
	return (ptr);
}

// #include "libft.h"

// static int	ft_count(int n)
// {
// 	int		count;

// 	count = 1;
// 	if (n < 0)
// 	{
// 		n = -n;
// 		count++;
// 	}
// 	while (n > 9)
// 	{
// 		n /= 10;
// 		count++;
// 	}
// 	return (count);
// }

// static void	ft_while(char *ptr, int n, int i)
// {
// 	while (i >= 0)
// 	{
// 		ptr[i] = ((n % 10) + '0');
// 		n /= 10;
// 		i--;
// 	}
// }

// static char	*ft_allocate(size_t n)
// {
// 	char	*ptr;

// 	ptr = (char *)malloc(ft_count(n) + 1);
// 	if (!ptr)
// 		return (NULL);

// 	return (ptr);
// }

// char	*ft_itoa(int n)
// {
// 	int		count;
// 	int		i;
// 	int		is_negative;
// 	char	*ptr;
// 	//long = nb;
// 	count = ft_count(n);
// 	ptr = ft_allocate(n);
// 	if (ptr == NULL)
// 		return (0);
// 	is_negative = 0;
// 	if (n == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	else if (n < 0)
// 	{
// 		n = -n;
// 		is_negative = 1;
// 	}
// 	ptr[count] = '\0';
// 	i = count - 1;
// 	ft_while(ptr, n, i);
// 	if (is_negative)
// 		ptr[0] = '-';
// 	return (ptr);
// }

// int main()
// {
// 	char *s = ft_itoa(1234);
// 	printf("%s\n", s);
// 	//system("leaks a.out");
// }
// //0x7fdf6e400690