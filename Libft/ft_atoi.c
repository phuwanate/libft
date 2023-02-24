/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:55:21 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 11:59:02 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
// int main()
// {
// 	printf("Real_atoi out of isspace: %d\n", atoi(" \e475"));
// 	printf("Fake_atoi out of isspace: %d\n", ft_atoi(" \e475"));
// 	printf("Real_atoi isspace: %d\n", atoi(" \n\t\v\f\r475"));
// 	printf("Fake_atoi isspace: %d\n", ft_atoi(" \n\t\v\f\r475"));
// 	printf("Fake atoi Overflow: %d\n", ft_atoi("2147483649"));
// 	printf("Fake atoi Underflow: %d", ft_atoi("-2147483649"));
// }
