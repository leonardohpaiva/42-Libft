/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:36:10 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/27 21:20:40 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_s;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len_s = ft_strlen(s1);
	while (i < len_s && (ft_strchr(set, s1[i])))
		i++;
	while (len_s > 0 && (ft_strchr(set, s1[len_s])))
		len_s--;
	if ((len_s - i + 1) <= 0)
		return (ft_strdup(""));
	str = ft_substr(s1, i, (len_s - i + 1));
	return (str);
}
