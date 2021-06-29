/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <contato@leonardopaiva.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:42:56 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/18 20:20:30 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len--)
	{
		*temp = (unsigned char)c;
		temp++;
	}
	return (b);
}
