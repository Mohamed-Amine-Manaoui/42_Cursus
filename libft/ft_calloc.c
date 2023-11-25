/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:19:43 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/21 10:16:30 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total_s;

	total_s = num * size;
	if (size != 0 && total_s / size != num)
		return (NULL);
	ptr = malloc(size * num);
	if (ptr == NULL)
		return (NULL);
	if (ptr != 0)
		ft_bzero(ptr, size * num);
	return (ptr);
}
// int main()
// {
// 	size_t num = 0;
// 	size_t size = 0;

// 	int *str = (int *)ft_calloc(num, size);
// 	if (str != NULL)
// 	{
// 		printf("True");
// 		free(str);
// 	}
// 	else 
// 		printf("False");
// }