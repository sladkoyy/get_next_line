/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:50:00 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:04:56 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./include/libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	if (*str2 == '\0')
		return ((char*)str1);
	if (n >= ft_strlen(str1))
		return (ft_strstr(str1, str2));
	else
	{
		while ((unsigned int)i < n)
		{
			if ((ft_strncmp(&str1[i], str2, ft_strlen(str2)) == 0))
				if (ft_strlen(str2) + i <= n)
					return (((char*)str1 + i));
			i++;
		}
	}
	return (NULL);
}
