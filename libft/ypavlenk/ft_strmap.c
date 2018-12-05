/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:50:50 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/07 18:51:00 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i += 1;
	}
	str[i] = '\0';
	return (str);
}
