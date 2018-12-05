/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:34:04 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/05 19:34:44 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char*)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
			return (&udst[i + 1]);
		i += 1;
	}
	return (NULL);
}
