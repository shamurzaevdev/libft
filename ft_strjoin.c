/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:18:03 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 17:00:20 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		cnt1;
	int		cnt2;
	char	*str;

	if (s1 && s2)
	{
		cnt1 = ft_strlen(s1);
		cnt2 = ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (cnt1 + cnt2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[cnt1] = s2[i];
			cnt1++;
		}
		str[cnt1] = '\0';
		return (str);
	}
	return (NULL);
}
