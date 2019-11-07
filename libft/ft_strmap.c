/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:44:39 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:04:38 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	l;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * l + 1)))
		return (NULL);
	while (l-- > 0)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
