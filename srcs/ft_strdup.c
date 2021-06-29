/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 22:01:41 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 22:21:02 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*pt;

	len = ft_strlen(s1) + 1;
	pt = malloc((len) * sizeof(char));
	if (!pt)
		return (NULL);
	return (ft_memcpy(pt, s1, len));
}
