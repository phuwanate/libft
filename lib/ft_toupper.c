/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:47:16 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 18:47:21 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int	main()
// {
// 	printf("Lower to Upper case : %c\n", ft_toupper('c'));
// 	printf("Unchanged case : %c", ft_toupper('C'));
// 	return(0);
// }
