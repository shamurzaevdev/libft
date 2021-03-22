/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:32:38 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/17 14:34:31 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n)
		while ((s1[i] == s2[i]) && s1[i] != '\0' && --n)
			i++;
	else
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
