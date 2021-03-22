/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:31:32 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/19 14:34:13 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	recurs_ft_putnbr(unsigned int nb, int fd)
{
	char c;

	if (nb)
	{
		c = '0' + (nb % 10);
		recurs_ft_putnbr(nb / 10, fd);
		write(fd, &c, 1);
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	unsigned int wrap;

	wrap = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		wrap = -nb;
	}
	if (nb == 0)
		write(fd, "0", 1);
	else
		recurs_ft_putnbr(wrap, fd);
}
