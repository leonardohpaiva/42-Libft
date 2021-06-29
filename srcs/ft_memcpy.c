/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:22:31 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 00:37:18 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
