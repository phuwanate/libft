/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:57:42 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/16 12:57:51 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char	*s;
	char		*d;
	// char		*lasts;
	// char		*lastd;

	s = src;
	d = dst;
	if ((char *)src != (void *)0 && d != (void *)0)
	{	
	// 	if (d < s)
	// 	{
	// 		while (n--)
	// 			*d++ = *s++;
	// 	}
	// 	else
	// 	{	
	// 		lasts = (char *)s + (n - 1);
	// 		lastd = d + (n - 1);
	// 		while (n--)
	// 		{
	// 			*lastd-- = *lasts--;
	// 		}
	// 	}
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
// int main () {
// //    const char src[50] = "http://www.tutorialspoint.com";

// 	char src[] = "";
//    char dest[100];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(src+5, src, 10);
// //    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest); 
//    return(0);
// }