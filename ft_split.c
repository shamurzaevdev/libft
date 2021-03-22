/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:23:27 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 14:15:31 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		str_get(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static size_t	word_count(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static char		**free_if_error(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	pit;
	size_t	start;
	char	**res;

	if (!s || !(res = malloc((word_count(s, c) + 1) * sizeof(res))))
		return (0);
	pit = 0;
	i = 0;
	while (pit < word_count(s, c))
	{
		while (((char *)s)[i] == c && ((char *)s)[i])
			i++;
		start = i;
		while (((char *)s)[i] != c && ((char *)s)[i])
			i++;
		if (!(res[pit] = malloc(i - start + 1)))
			return (free_if_error(res));
		str_get(res[pit], s + start, i - start);
		pit++;
	}
	res[pit] = 0;
	return (res);
}
