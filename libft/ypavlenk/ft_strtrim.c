/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:40:50 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/11/07 18:42:44 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && ft_iswspace(s[i]))
		i += 1;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_iswspace(s[j + i]))
		j -= 1;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
