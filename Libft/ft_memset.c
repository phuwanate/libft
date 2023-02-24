/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:42:04 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 14:35:26 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int src, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)s;
	while (n--)
		*dest++ = (unsigned char)src;
	return (s);
}
