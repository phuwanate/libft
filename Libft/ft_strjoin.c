/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:27:39 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/23 15:27:43 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;
	size_t	size;

	if (s1 == NULL || s2 == NULL)
		return (ft_strdup(""));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr != NULL)
	{
		ft_strlcpy(ptr, s1, len_s1 + 1);
		ft_strlcpy(&ptr[len_s1], s2, len_s2 + 1);
	}
	return (ptr);
}
// int main()
// {
//     char s1[] = "Hello";
//     char s2[] = " World";
//     printf("%s", ft_strjoin(s1, s2));
// }
