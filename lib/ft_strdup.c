/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:38:43 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 15:06:32 by plertsir         ###   ########.fr       */
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
	if (!(dst))
		return (NULL);
	result = dst;
	while (*s1)
	{
		*dst++ = *s1++;
	}
	*dst = '\0';
	return (result);
}
// int main()
// {
//     char s[] = "ABC";
//     char *s2 = ft_strdup(s);
//     printf("%s", s2);
//     return 0;
// }
