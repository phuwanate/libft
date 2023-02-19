/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:42:04 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/15 17:44:36 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_memset(void *s, int src, size_t n)
{
	char *dest;

	dest = s;
	if (n > 0 && src != 0 && dest != NULL)
	{	
		while (n--)
		{
			*dest++ = src;
		}
		return(s);
	}
	*dest = '\0';
	return (s);
}
// int main()
// {
//     char str[50] = "for programming geeks.";
//     char str2[50] = "for programming geeks.";
//     char *p1;
//     char *p2;
//     printf("\nBefore memset(): %s\n", str); 
//     p1 = memset(str + 13, '.', 8*sizeof(char));
//     printf("After memset():  %s\n", str);
//     p2 = ft_memset(str2 + 13, '.', 8*sizeof(char));
//     printf("Fake  memset :   %s", str2); 
//     return (0);
// }