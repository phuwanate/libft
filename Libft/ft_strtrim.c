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

char	*ft_strtrim(char const *s1, char const *set)
{
	char    *s3;
	size_t  i;
	size_t  j;
	size_t  size;

	i = 0;
	while(s1[i] <= 32 || s1[i] == set[0])
		i++;
	j = i;
	while(s1[i + 1] != '\0' && s1[i + 1] != set[0])
		i++;
	size = i - j + 2;
	s3 = (char *)malloc(size  * sizeof(char));
	if(s3 != NULL)
		ft_strlcpy(s3, &s1[j], size);
	return(s3);
}