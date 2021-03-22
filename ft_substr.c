/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:08:14 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/17 17:17:13 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	cnt;
	char			*p;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		cnt = ft_strlen(&s[start]);
		if (cnt < len)
			len = cnt;
		if (!(p = malloc((len + 1) * sizeof(char))))
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			p[i - start] = s[i];
			i += 1;
		}
		p[i - start] = '\0';
		return (p);
	}
}
