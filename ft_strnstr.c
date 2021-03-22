/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:32:40 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/03 16:44:54 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	j;

	x = 0;
	if (!*to_find)
		return ((char *)str);
	while (x < len && str[x])
	{
		j = 0;
		while (x + j < len && str[x + j] && (str[x + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + x));
			++j;
		}
		++x;
	}
	return (NULL);
}
