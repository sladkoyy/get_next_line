/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:33:30 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:05:09 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./include/libft.h"

static char	*ft_solve(char *str, const char *s, size_t l, size_t i)
{
	size_t	j;

	j = 0;
	l = l - i;
	while (j < l)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char		*ft_strtrim(const char *s)
{
	size_t	l;
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	if (!s)
		return ((char*)s);
	l = ft_strlen(s);
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
	{
		if (!(str = ft_memalloc(sizeof(char) * 1)))
			return (str);
		str[j] = '\0';
		return (str);
	}
	while (s[l - 1] == '\n' || s[l - 1] == '\t' || s[l - 1] == ' ')
		l--;
	if (!(str = ft_memalloc(sizeof(char) * (l - i) + 1)))
		return (str);
	ft_solve(str, s, l, i);
	return (str);
}
