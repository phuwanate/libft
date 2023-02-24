/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:08:19 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 16:09:09 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && (n > 0))
	{
		if (!((*s1 >= 32 && *s1 < 127) || (*s2 >= 32 && *s2 < 127)))
			return (1);
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
// int main()
// {
//     char s1[] = "test\0";
//     char s2[] = "test\0";
//     printf("%d\n", ft_strncmp(s1, s2, 6));
//     printf("real : %d", strncmp("test\200", "test\0", 6));
//     return 0;
// }
