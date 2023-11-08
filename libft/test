// #include <stdlib.h>
// #include <string.h>
// char *ft_substr(char const *s, unsigned int start, size_t len) {
//     // Vérifiez les cas d'erreur
//     if (s == NULL || start >= strlen(s)) {
//         return NULL;
//     }

//     // Allouez de la mémoire pour la nouvelle chaîne
//     char *substr = (char *)malloc(len + 1);  // +1 pour le caractère nul

//     // Vérifiez si l'allocation a réussi
//     if (substr == NULL) {
//         return NULL;
//     }

//     // Copiez les caractères de la chaîne source dans la nouvelle chaîne
//     for (size_t i = 0; i < len && s[start] != '\0'; i++) {
//         substr[i] = s[start];
//         start++;
//     }

//     // Assurez-vous que la nouvelle chaîne se termine par un caractère nul
//     substr[len] = '\0';

//     return substr;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *ft_substr(char const *s, unsigned int start, size_t len);

// int main() {
//    const char *source = NULL;
//     unsigned int start = 8; // Index de départ
//     size_t length = 5; // Longueur de la nouvelle chaîne

//     char *substring = ft_substr(source, start, length);
//     printf("%s\n",substring);
//     return 0;
// }
#include "libft.h"

void skip_norme(char *ptr, int size, int sign ,int n)
 {
   int i;
   i = size;
	ptr[i + 1] = '\0';
	while (i > 0)
	{
		ptr[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	if (sign ==  -1)
			ptr[0] = '-';           
}

char	*ft_itoa(int n)
{
	int		sign;
	int		temp;
	int		size;
	char	*ptr;
 
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	temp = n;
	size = 1;
	while (temp > 9)
	{
		temp /= 10;
		size++;
	}
	ptr = (char *)malloc(size + 2);
	if (ptr == NULL)
		return (0);
    skip_norme(ptr, size, sign , n);
	            return (ptr);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 12345; // Chiffre de test
    char *str = ft_itoa(num);

    if (str != NULL) {
        printf("Nombre: %d\nChaîne: %s\n", num, str);
        free(str); // Assurez-vous de libérer la mémoire allouée
    } else {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}