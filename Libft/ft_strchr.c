/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:53:30 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/22 11:53:34 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// int main()
// {
//     char str[] = "conjour";
//     char *ptr = strchr(str, 's');
//     char *ptr2 = ft_strchr(str, 's');
//     printf("Using Real cefore ft : '%s', After ft : '%s'\n", str, ptr);
//     printf("Using Fake cefore ft : '%s', After ft : '%s'", str, ptr2);
// }
