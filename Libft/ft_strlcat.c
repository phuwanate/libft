/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:08:15 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 15:19:27 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	k;
	size_t	n;

	src_len = ft_strlen(src);
	if (dstsize == 0 && dst == NULL)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	k = 0;
	n = dst_len;
	while (src[k] != 0 && k < dstsize - dst_len - 1)
	{
		dst[n] = src[k];
		n++;
		k++;
	}
	dst[n] = '\0';
	return (dst_len + src_len);
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
