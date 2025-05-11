/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:02:40 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/11 10:33:04 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substr(char const *s, char c)
{
	int	count;
	int	len;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(s);
	j = 0;
	count = 0;
	while (i < len)
	{
		while (i < len && s[i] == c)
			i++;
		j = i;
		while (i < len && s[i] != c)
			i++;
		if (i > j)
			count++;
	}
	return (count);
}

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static void	split_substr(char **str, char const *s, char c)
{
	int	str_i;
	int	start;
	int	i;
	int	len;

	i = 0;
	start = 0;
	str_i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (i < len && s[i] == c)
			i++;
		start = i;
		while (i < len && s[i] != c)
			i++;
		if (i > start)
		{
			str[str_i] = malloc(i - start + 1);
			ft_strncpy(str[str_i], &s[start], i - start);
			str[str_i][i - start] = '\0';
			str_i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = count_substr(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = NULL;
	i = 0;
	split_substr(str, s, c);
	while (i > 0)
	{
		if (str[i] == NULL)
		{
			free(str[i]);
			return (NULL);
		}
		i--;
	}
	return (str);
}
