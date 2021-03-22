/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:08:36 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 17:02:23 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *foo;
	unsigned char *bar;

	foo = (unsigned char*)s1;
	bar = (unsigned char*)s2;
	if (!n)
		return (0);
	while (--n && (*bar == *foo))
	{
		bar++;
		foo++;
	}
	return (*foo - *bar);
}
