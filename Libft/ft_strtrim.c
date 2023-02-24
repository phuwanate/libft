/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:28:16 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/23 17:28:19 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	check_trim(char const *s, char const *trim)
{
	size_t	i;

	i = -1;
	while (trim[++i])
	{
		if (*s == trim[i])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	size_t	size;
	int		i;
	int		j;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (s1[i] < 32 || check_trim(&s1[i], set) == 1)
	{
		if (s1[i++] == '\0')
			return (ft_strdup(""));
	}
	j = i;
	while (s1[i] != '\0')
		i++;
	while (s1[i] == '\0' || check_trim(&s1[i], set) == 1)
		i--;
	size = i - j + 2;
	s3 = (char *)malloc(size * sizeof(char));
	if (s3 != NULL)
		ft_strlcpy(s3, &s1[j], size);
	return (s3);
}
