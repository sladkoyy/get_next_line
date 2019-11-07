/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:50:00 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:05:03 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./include/libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	size_t	l;
	char	*p;

	i = 0;
	l = ft_strlen(str2);
	p = NULL;
	if (ft_strlen(str1) == 0 && ft_strlen(str2) == 0)
		p = ((char*)str1 + i);
	while (str1[i] != '\0')
	{
		if (ft_strncmp(&str1[i], str2, l) == 0
				|| ft_strlen(str1) == 0 || ft_strlen(str2) == 0)
		{
			p = ((char*)str1 + i);
			return (p);
		}
		i++;
	}
	return (p);
}
