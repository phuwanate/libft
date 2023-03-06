/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:58:35 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/06 16:59:46 by first            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*lasts;
	char		*lastd;

	d = dst;
	s = src;
	if (src != NULL || dst != NULL)
	{
		if (d < s)
			ft_memcpy(d, s, len);
		else
		{
			lasts = (char *)s + (len - 1);
			lastd = d + (len - 1);
			while (len--)
				*lastd-- = *lasts--;
		}
	}
	return (dst);
}
// int main()
// {
//     char str[100] = "Learningisfun";
//     char str2[100] = "Learning";
//     char *first, *second;
//     first = str;
//     second = str2;
//     printf("Original string : %s\n", str2);
//     // when overlap it start from first position
//     ft_memmove(second+3, first, 10);
//     printf("memmove overlap : %s\n", str2);
//     return 0;
// }
// int main()
// {
// 	char str[100] = "Learningisfun";
// 	char *first, *second;
// 	first = str;
// 	second = str;
// 	printf("Original string :%s\n ", str);
// 	// when overlap it start from first position
// 	memmove(second + 8, first, 10);
// 	printf("memmove overlap : %s\n ", str);
// 	return 0;
// }
