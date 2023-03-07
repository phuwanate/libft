/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:53:30 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/07 23:57:16 by first            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//FIRST occurance value 'c'.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if ((char)c == '\0')
	{
		while (*ptr)
			ptr++;
		return (ptr);
	}
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	return (NULL);
}
