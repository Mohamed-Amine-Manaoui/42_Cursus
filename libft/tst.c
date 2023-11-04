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
