/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:00:58 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 16:54:24 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned char symb;

	p = (unsigned char *)s;
	symb = (unsigned char)c;
	while (n--)
	{
		if (*p == symb)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
