/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:23:15 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 14:24:34 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	numb;
	char			*p;

	if (!s)
		return (NULL);
	if ((p = malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	numb = 0;
	while (s[numb])
	{
		p[numb] = f(numb, s[numb]);
		numb++;
	}
	p[numb] = '\0';
	return (p);
}
