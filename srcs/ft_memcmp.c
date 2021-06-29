/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 01:00:25 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 15:09:55 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt_s1;
	unsigned char	*pt_s2;

	i = 0;
	pt_s1 = (unsigned char *)s1;
	pt_s2 = (unsigned char *)s2;
	if ((n == 0) || (!pt_s1 && !pt_s2))
		return (0);
	while (i < n)
	{
		if (pt_s1[i] != pt_s2[i])
			return (pt_s1[i] - pt_s2[i]);
		i++;
	}
	return (0);
}
