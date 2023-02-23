/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:57:42 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 14:32:40 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (src != NULL || dst != NULL)
	{	
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
