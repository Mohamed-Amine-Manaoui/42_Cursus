/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:35:20 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 14:36:37 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int main() {
    char lowercaseChar = 'q';
    char uppercaseChar = ft_toupper(lowercaseChar);
    
    printf("Caractère en minuscule : %c\n", lowercaseChar);
    printf("Caractère en majuscule : %c\n", uppercaseChar);

    return 0;
}
*/
