/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:05:10 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/28 20:19:13 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*new_s;

	len = 0;
	if (!s || !(*f))
		return (NULL);
	while (s[len])
		len++;
	new_s = (malloc(sizeof(char) * (len + 1)));
	if (!new_s)
		return (NULL);
	len = -1;
	while (s[++len])
		new_s[len] = f(len, s[len]);
	new_s[len] = '\0';
	return (new_s);
}
