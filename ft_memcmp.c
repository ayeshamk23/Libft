/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:31:52 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/11 10:29:22 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while ((n > i))
	{
		if ((const unsigned char)str1[i] > (const unsigned char) str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if ((const unsigned char)str1[i] < (const unsigned char)str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
