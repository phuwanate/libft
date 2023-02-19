#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *ptr;

    ptr = (char *)s;
    if(c == 0)
    {
        while(*s)
        {    
            *ptr++ = '\0';   
            s++;
        }
        return (ptr);
    }
    while (*s)
    {
        if (*s == c)
            return ((char *)s); 
        s++;
    }
    return (NULL);
}
// int main()
// {
//     char str[] = "bonjour";
//     char *ptr = strchr(str, 's');
//     char *ptr2 = ft_strchr(str, 's');
//     printf("Using Real Before ft : '%s', After ft : '%s'\n", str, ptr);
//     printf("Using Fake Before ft : '%s', After ft : '%s'", str, ptr2);
// }