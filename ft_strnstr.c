/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:46:40 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/21 09:20:34 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s2[i] != '\0')
		i++;
	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0' && len >= i)
	{
		j = 0;
		while (s1[j] == s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
