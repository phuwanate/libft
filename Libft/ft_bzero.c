/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:07:36 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/16 17:52:57 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (n--)
		ptr[i++] = 0;
}
// int main()
// {
// 	char str[] = "for programming geeks.";
// 	char str2[] = "for programming geeks.";
// 	printf("\nBefore bezero(): %s\n", str); 
// 	bzero(str + 13, 2);
// 	puts(str);
// 	ft_bzero(str2 + 13, 2);
// 	puts(str2);
// 	return (0);
// }
