/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:44:09 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/28 18:58:57 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int x)
{
	size_t	len;

	len = 0;
	if (x == 0)
		return (1);
	if (x < 0)
		len = len + 1;
	while (x != 0)
	{
		x /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len_n;
	long	x;
	char	*str;

	x = n;
	len_n = ft_intlen(x);
	str = (malloc(sizeof(char) * (len_n + 1)));
	if (!str)
		return (NULL);
	if (x == 0)
		str[0] = '0';
	if (x < 0)
	{
		str[0] = '-';
		x *= -1;
	}
	str[len_n] = '\0';
	while ((x > 0) && (--len_n >= 0))
	{
		str[len_n] = x % 10 + '0';
		x /= 10;
	}
	return (str);
}
