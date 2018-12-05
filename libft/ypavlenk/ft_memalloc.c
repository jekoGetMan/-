/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:33:24 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/05 19:33:28 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (unsigned char *)malloc(size);
		if (!ptr)
			return (NULL);
		while (size)
			ptr[--size] = 0;
	}
	return ((void *)ptr);
}
