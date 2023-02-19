#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char    *ptr;
    char    *ptr2;
    char    *result;
    size_t	i;
	int		START;

    i = len;
    ptr = (char *)haystack;
    ptr2 = (char *)needle;
    START = 1;
	if (!(*needle))
		return ptr;
	while (i-- > 0 && *ptr)
    {
        if (*ptr2 == *ptr)
        {    
            if(START == 1)
				result = ptr;
            ptr2++;
			START = 0;
        }
        else if (*ptr2 != *ptr)
        {
            ptr2 = (char *)needle ;
			START = 1;
        }
        if (*ptr2 == '\0')
            return (result);
        ptr++;
    }
    return NULL;
}
// int main ()
// {
// 	char main_string[50] = "lorem ipsum dolor sit amet";
// 	char search_string[30] = "dolor";
// 	printf( "%s", ft_strnstr(main_string, search_string, 15));
// 	return 0;
// }