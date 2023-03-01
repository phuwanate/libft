/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:02:41 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 16:05:53 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
// int main ()
// {
//     char src[50] = "";
//     char dst[50];

//     size_t n = 50;
//     size_t b;
//     b = ft_strlcpy(dst, src, n);
//     printf("after copy: %lu\n", strlcpy(dst, src, n));
//     printf("after fake copy: %lu", b);
//     return 0; 
// }
