/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:00:30 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/24 15:00:32 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_str(char *dst , int	nb, int count, int i)
{
	dst[i + 1] = '\0';
	while (i > count++)
	{
		if (nb < 0)
		{
			dst[0] = '-';
			nb = nb * -1;
		}
		else if (nb > 9)
		{
			dst[i] = nb % 10;
			nb = nb / 10;
		}
		else
			dst[i] = nb ;
		i--;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*dst;

	i = 0;
	count = n;
	while(count > 0)
	{
		count = count / 10;
		i++;
	}
	dst = (char *)malloc((i +  1) * sizeof(char));
	if(!dst)
		return (NULL);
	ft_str(dst, n, count, i);
	return(dst);
}
