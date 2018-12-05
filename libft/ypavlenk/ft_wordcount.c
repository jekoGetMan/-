/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:39:58 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/12/05 15:05:15 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	g;

	i = 0;
	g = 0;
	while (s[i])
	{
		if (s[i] != c)
			g += 1;
		while (s[i] != c && s[i + 1])
			i += 1;
		i += 1;
	}
	return (g);
}
