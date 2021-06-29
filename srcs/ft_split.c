/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:11:25 by lehenriq          #+#    #+#             */
/*   Updated: 2021/06/28 21:09:47 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while ((s[i] != '\0') && (s[i] == c))
		i++;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		words++;
		while ((s[i] != '\0') && (s[i] == c))
			i++;
	}
	return (words);
}

size_t	ft_strclen(char const *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	number_w;
	char	**s_split;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	number_w = ft_countwords(s, c);
	s_split = malloc(sizeof(char *) * (number_w + 1));
	if (!s_split)
		return (NULL);
	while (s[i] != '\0')
	{
		if ((s[i] != '\0') && (s[i] != c))
		{
			s_split[j] = ft_substr(s, i, ft_strclen(&s[i], c));
			i = (i + ft_strclen(&s[i], c) - 1);
			j++;
		}
		i++;
	}
	s_split[j] = NULL;
	return (s_split);
}
