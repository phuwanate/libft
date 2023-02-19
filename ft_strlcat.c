#include "libft.h"

size_t  ft_strlcat(char *dst,const char *src, size_t dstsize)
{
    size_t  result;
    char    *ptr2;

    ptr2 = (char *)src;
    result = 0;
    while(*dst && dstsize > 0)
    {
        dst++;//counting for items in dst.(null is not counted.)
        result++;
        dstsize--;//we decrete the dstsize for store the dst in our room.
    }
    if(dstsize > 0)//if dstsize != 0 it's mean we still have room for src.
    {
        while (*src && dstsize-- > 1)//we check if src have items for store in room(not null)
            *dst++ = *src++;
        *dst = '\0';//null terminated.
        while(*ptr2)
        {
            result++;
            ptr2++;//counting for items in src.(null is not counted.)
        }
    }
    while(*ptr2)//if dstsize is 0 or dst is null we only count items in src.
    {
        result++;
        ptr2++;    
    }
    return(result);
}
// int main()
// {
//     char first[] = "rrrrrr";
//     char last[] = "";
//     int r;
//     int size = 15;

//     r = ft_strlcat(first,last,size);
//     printf("%d", r);
//     return(0);
// }