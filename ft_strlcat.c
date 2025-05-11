/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:39:27 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/11 10:36:46 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	d_len;
	unsigned int	j;
	unsigned int	len;
	unsigned int	s_len;

	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	j = 0;
	len = dstsize - 1;
	if (dstsize > d_len)
	{
		while (src[j] != '\0' && j < (len - d_len))
		{
			dst[d_len + j] = src[j];
			j++;
		}
		dst[d_len + j] = '\0';
		return (s_len + d_len);
	}
	else
		return (s_len + dstsize);
}
