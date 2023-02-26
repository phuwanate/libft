/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:59:47 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/21 12:02:09 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
// int main()
// {
//     char s[] = "ABC";
//     size_t  i = 0;
//     char *ptr;
//     char *ptr2;   
//     ptr = (char *)ft_calloc(4, sizeof(char));
//     ptr2 = (char *)calloc(4, sizeof(char));
//     return(0);
// }