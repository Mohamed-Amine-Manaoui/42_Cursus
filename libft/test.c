/*#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;
	int last_occurrence = -1;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			last_occurrence = i;
		i++;
	}
	if (last_occurrence != -1)
		return ((char *)(str + last_occurrence));
	return (0);
}

#include <stdio.h>

char *ft_strrchr(const char *str, int c);

int main() {
    const char *str = "Hello, world!";
    char character = 'o';

    char *result = ft_strrchr(str, character);

    if (result != NULL) {
        printf("Last occurrence of '%c' in \"%s\" is at position %ld\n", character, str, result - str);
    return 0;
}
*/