// sub_s = word No. in the String.
// sub_w = count char of each word.
#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int		i;
	int		count;
	int		cap;

	cap = 1;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
			cap = 1;
		else
			cap = 0;
		if ((cap == 1) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count += 1;
			cap = 0;
		}
		i++;
	}
	return (count);
}

int	count_char(char const *s, char c, char **ptr, int k)
{
	k = 0;
	while (s[k] != c && s[k] != '\0')
		k++;
	*ptr = malloc((k + 1) * sizeof(char));
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		sub_s;
	int		sub_w;

	if (s == NULL)
		return (NULL);
	ptr = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	sub_s = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			sub_w = count_char(&s[i], c, &ptr[sub_s], sub_w);
			ft_strlcpy(ptr[sub_s++], s + i, sub_w + 1);
			i += sub_w;
		}
		else
			i++;
	}
	ptr[sub_s] = NULL;
	return (ptr);
}
