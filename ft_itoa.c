/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:15:40 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 14:23:07 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lens_numb(int n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static void		recurs_itoa(char *p, unsigned int n, int len)
{
	if (n / 10)
	{
		p[--len] = '0' + n % 10;
		n = n / 10;
		recurs_itoa(p, n, len);
	}
	else
		p[0] = '0' + n;
}

char			*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	len;
	char			*p;

	len = lens_numb(n);
	if (n < 0)
		p = malloc(len + 2);
	else
		p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	i = n;
	if (n < 0)
	{
		p[len + 1] = '\0';
		p[0] = '-';
		i = -n;
		recurs_itoa(p + 1, i, len);
	}
	else
		recurs_itoa(p, i, len);
	return (p);
}
