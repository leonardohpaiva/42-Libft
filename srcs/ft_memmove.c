/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:35:46 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 19:44:04 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pt_src;
	unsigned char	*pt_dst;

	pt_src = (unsigned char *)src;
	pt_dst = (unsigned char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (src < dst)
	{
		while (len > 0 && dst != src)
		{
			len--;
			pt_dst[len] = pt_src[len];
		}
	}
	return (dst);
}
