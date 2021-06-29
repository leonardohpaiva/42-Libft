/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 00:41:24 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 00:56:32 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_s;
	unsigned char	pt_c;

	pt_s = (unsigned char *)s;
	pt_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (pt_s[i] == pt_c)
			return (pt_s + i);
		i++;
	}
	return (NULL);
}
