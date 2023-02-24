/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:21:24 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 14:22:38 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
// int main()
// {
//     char s[] = {0, 1, 2 ,3 ,4 ,5};
//     printf("%s", ft_memchr(s, 1, 1));
//     return 0;
// }
