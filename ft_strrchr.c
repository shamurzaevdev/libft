/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:20:10 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 17:06:26 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		i;

	pointer = (char *)s;
	i = 0;
	while (pointer[i] != '\0')
		i++;
	if (!c)
		return (&pointer[i]);
	while (i && pointer[i] != (char)c)
		i--;
	if (pointer[i] == (char)c)
		return (&pointer[i]);
	else
		return (NULL);
}
