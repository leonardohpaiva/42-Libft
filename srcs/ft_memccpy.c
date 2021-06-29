/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:02:25 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 00:09:54 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_src;
	unsigned char	*pt_dst;

	pt_src = (unsigned char *)src;
	pt_dst = (unsigned char *)dst;
	if (!pt_src && !pt_dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		pt_dst[i] = pt_src[i];
		if (pt_dst[i] == (unsigned char)c)
			return (&pt_dst[i] + 1);
		i++;
	}
	return (NULL);
}
