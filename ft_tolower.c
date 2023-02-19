#include "libft.h"

int     ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
// int	main()
// {
// 	printf("Upper to Lower case : %c\n", ft_toupper('C'));
// 	printf("Unchanged case : %c", ft_toupper('c'));
// 	return(0);
// }