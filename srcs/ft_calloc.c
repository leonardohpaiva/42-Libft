/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:19:44 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 15:30:02 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*func;

	func = malloc(count * size);
	if (func == NULL)
		return (NULL);
	ft_bzero(func, (count * size));
	return (func);
}
