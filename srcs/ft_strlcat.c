/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:07:55 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 22:00:41 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	j = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] && (j + 1) < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_src + len_dst);
}
