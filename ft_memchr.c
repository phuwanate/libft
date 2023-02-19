#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *ptr;

    ptr = (char *)s;
    while (n--)
    {
        if (*ptr == c)
        {
            return (ptr);
        }
        ptr++;
    }
    return(NULL);
}
// int main()
// {
//     char s[] = "bonjour";
//     printf("%s", ft_memchr(s, 'b', 4));
//     return 0;
// }