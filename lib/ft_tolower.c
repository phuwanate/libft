/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:46:05 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 18:46:11 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int	main()
// {
// 	printf("Upper to Lower case : %c\n", ft_toupper('C'));
// 	printf("Unchanged case : %c", ft_toupper('c'));
// 	return(0);
// }
