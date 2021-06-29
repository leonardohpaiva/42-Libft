/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:15:17 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/25 15:33:37 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		flag;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		flag = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0'
			&& needle[j] != '\0' && i < len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[flag]);
		i = flag + 1;
		j = 0;
	}
	return (0);
}
