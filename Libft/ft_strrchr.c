/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:16 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/08 11:37:33 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if ((unsigned char)c == '\0')
	{
		while (*ptr)
			ptr++;
		return (ptr);
	}
	while (*ptr)
		ptr++;
	while (*ptr != *s || *ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		else if (*ptr == *s)
			return (NULL);
		ptr--;
	}
	return (NULL);
}
