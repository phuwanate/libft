/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:58:35 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/07 23:36:47 by first            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*last_s;
	char		*last_d;

	d = dst;
	s = src;
	if (src != NULL || dst != NULL)
	{
		if (d < s)
			ft_memcpy(d, s, len);
		else
		{
			last_s = (void *)s + (len - 1);
			last_d = d + (len - 1);
			while (len--)
				*last_d-- = *last_s--;
		}
	}
	return (dst);
}
