/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:44:27 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/07 18:44:29 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == c)
			return ((char *)&s[i - (j - 1)]);
	return (NULL);
}
