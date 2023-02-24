/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:52:09 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/23 12:52:14 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;
	size_t	n;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
	{
		return (ft_strdup(""));
	}
	n = ft_strlen(&s[start]);
	if (len > n)
		size = n + 1;
	else
		size = len + 1;
	dst = (char *)malloc(size * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, &s[start], size);
	return (dst);
}
