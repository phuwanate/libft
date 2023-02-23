/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:28:16 by plertsir          #+#    #+#             */
/*   Updated: 2023/02/23 17:28:19 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const set)
{
    char    *s3;
    size_t  i;
    size_t  j;
    size_t  size;

    i = 0;
    while(s1[i] < 32 || s1[i] == set)
        i++;
    j = i;
    while(s1[i] != '\0')
        i++;
    while(s1[i] < 32 && s1[i] > 127 || s1[i] == set)
        i--;
    size = i - j + 1;
    s3 = (char *)malloc(size * sizeof(char));
    if(s3 != NULL)
        ft_strlcpy(s3, set, size);
    return(s3);
}