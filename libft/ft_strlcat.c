/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:45:19 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:04:34 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = size - 1;
	if (ft_strlen(dest) >= size)
		i = size + ft_strlen(src);
	else if (ft_strlen(dest) < size)
	{
		i = ft_strlen(dest) + ft_strlen(src);
		ft_strncat(dest, src, n - ft_strlen(dest));
	}
	if (size == 0)
	{
		i = ft_strlen(src);
		return (i);
	}
	return (i);
}
