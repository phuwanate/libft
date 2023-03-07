/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:38:43 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/07 23:58:21 by first            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*ptr;
	char	*result;
	size_t	size;

	size = 0;
	ptr = (char *)s1;
	size = ft_strlen(ptr);
	dst = (char *)malloc(size + 1 * sizeof(char));
	result = dst;
	if (dst)
	{
		while (*ptr != '\0')
		{
			*dst++ = *ptr++;
		}
		*dst = '\0';
	}
	return (result);
}
