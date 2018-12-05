/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:42:58 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/07 18:43:00 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	strsub = (char *)malloc(sizeof(char) * len + 1);
	if (!strsub)
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i += 1;
	}
	strsub[i] = '\0';
	return (strsub);
}
