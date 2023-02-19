#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t     i;

    i = 0;    
    if(dst == NULL || src == NULL)
        return 0;
    if(dstsize > 0)
    {
        while(*src && i < dstsize - 1)
        {
            *dst++ = *src++;
            i++;
        }
        *dst = '\0';
    }
    while(*src++)
         i++;    
    return(i);
}
// int main ()
// {
//     char src[50] = "";
//     char dst[50];

//     size_t n = 50;
//     size_t b;
//     b = ft_strlcpy(dst, src, n);
//     printf("after copy: %lu\n", strlcpy(dst, src, n));
//     printf("after fake copy: %lu", b);
//     return 0; 
// }