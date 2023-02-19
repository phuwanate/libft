#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *ptr;

    ptr = (char *)s;
    if (c == 0)
    {
        while (*s)
        {    
            *ptr++ = '\0';   
            s++;
        }
        return (ptr);
    }
    while(*ptr)
    {
        ptr++;
    }
    ptr--;
    while (*ptr != *s || *ptr)
    {
        if (*ptr == c)
            return (ptr);
        else if(*ptr == *s)
            return(NULL);
        ptr--;
    }
    return (NULL);
}
// int main()
// {
//     char str[] = "bonjour";
//     char *ptr = strrchr(str, 'b');
//     char *ptr2 = ft_strrchr(str, 'b');
//     printf("Using Real Before ft : '%s', After ft : '%s'\n", str, ptr);
//     printf("Using Fake Before ft : '%s', After ft : '%s'", str, ptr2);
// }