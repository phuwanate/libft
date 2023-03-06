/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:58:35 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/06 17:08:11 by first            ###   ########.fr       */
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
			lasts = (void *)s + (len - 1);
			lastd = d + (len - 1);
			while (len--)
				*lastd-- = *lasts--;
		}
	}
	return (dst);
}

