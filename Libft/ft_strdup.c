#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *dst;
    char    *ptr;
    char    *result;
    size_t  size;

    size = 0;
    ptr = (char *)s1;
    while (*ptr)
    {
        ptr++;
        size++;
    }
    dst = (char *)malloc(size+1 * sizeof(char));
    if (!(dst))
        return NULL;
    result = dst;
    while (*s1)
    {
        *dst++ = *s1++;
    }
    *dst = '\0';
    return (result);
}
// int main()
// {
//     char s[] = "ABC";
//     char *s2 = ft_strdup(s);
//     printf("%s", s2);
//     return 0;
// }