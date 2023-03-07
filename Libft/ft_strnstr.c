/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:10:54 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/06 18:47:22 by first            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while ((len > 0) && (haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while ((needle[j]) && (haystack[i + j] == needle[j]) && (i + j < len))
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
