/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:40:11 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/01 14:40:31 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int main() {
    char uppercaseChar = 'q';
    char lowercaseChar = ft_toupper(uppercaseChar);
    
    printf("Caractère en majuscule : %c\n", uppercaseChar);
    printf("Caractère en minuscule : %c\n", lowercaseChar);
    
    return 0;
}
*/
