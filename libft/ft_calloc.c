#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    if (num == 0 || size == 0)
    return NULL;
    int *ptr;

    ptr = malloc(size * num);
    if (ptr != 0)
    {
        ft_bzero(ptr,size * num);
    }
    return ptr
}