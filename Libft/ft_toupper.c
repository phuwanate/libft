#include "libft.h"

int		ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int	main()
// {
// 	printf("Lower to Upper case : %c\n", ft_toupper('c'));
// 	printf("Unchanged case : %c", ft_toupper('C'));
// 	return(0);
// }