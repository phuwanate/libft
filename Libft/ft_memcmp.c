#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *ptr1;
    char    *ptr2;

    ptr1 = (char *)s1;
    ptr2 = (char *)s2;
    while ((*ptr1 || *ptr2) && n-- > 0)
    {
        if ((*ptr1 < 32 && *ptr1 >= 127 && *ptr1) 
			|| (*ptr2 < 32 && *ptr2 >= 127 && *ptr2))//Unprintable and it isn't NULL
            break;
        else if((*ptr1 >= 32 && *ptr1 < 127) 
			|| (*ptr2 >= 32 && *ptr2 < 127))// Only printable
        {
            if (*ptr1 != *ptr2)
                return (*ptr1 - *ptr2);
        }
        else// NULL + Printable
        {
          if (*ptr1 != *ptr2)
                return (*ptr2 - *ptr1);
        }
        ptr1++;
        ptr2++;
    }
    return(0);
}
// int main()
// {
//     char s1[] = "t\200";
//     char s2[] = "t\0";
//     printf("%d\n", ft_memcmp(s1, s2, 2));
//     printf("real : %d", memcmp("t\200", "t\0", 5));
//     return 0;
// }