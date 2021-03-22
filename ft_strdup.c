/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashamurz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:49:10 by ashamurz          #+#    #+#             */
/*   Updated: 2021/03/17 17:14:10 by ashamurz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*p;

	i = ft_strlen(src);
	if ((p = malloc(i + 1)) == NULL)
		return (NULL);
	else
		return (ft_strcpy(p, src));
}
