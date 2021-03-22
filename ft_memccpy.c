/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:42:59 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 17:05:10 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	i = 0;
	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		if ((unsigned char)src_copy[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
