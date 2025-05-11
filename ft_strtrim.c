/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:41:46 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/21 09:08:15 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	trimmed(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*empty;

	start = 0;
	if (!str)
		return (NULL);
	end = ft_strlen(str) - 1;
	while (trimmed(str[start], set))
		start++;
	while (end > start && trimmed(str[end], set))
		end--;
	len = end - start + 1;
	if (len <= 0)
	{
		empty = (char *)malloc(1);
		*empty = '\0';
		return (empty);
	}
	return (ft_substr(str, start, len));
}
