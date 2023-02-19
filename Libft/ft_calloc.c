#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *ptr;
    char    *result;

    ptr = (char *)malloc(count * size);
    result = ptr;
    while (count--)
        *ptr++ = '\0';
    return result;
} 
// int main()
// {
//     char s[] = "ABC";
//     size_t  i = 0;
//     char *ptr;
//     char *ptr2;
    
//     ptr = (char *)ft_calloc(4, sizeof(char));
//     ptr2 = (char *)calloc(4, sizeof(char));
//     return(0);
// }