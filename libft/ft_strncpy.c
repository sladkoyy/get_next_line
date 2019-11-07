/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:34:09 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:04:48 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./include/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char		*p_dest;

	p_dest = dest;
	if (ft_strlen(src) == 0)
	{
		while (n-- > 0)
			*p_dest++ = '\0';
		return (dest);
	}
	if (ft_strlen(src) != 0)
	{
		while (n-- > 0)
		{
			if (*src == '\0')
			{
				while (n-- > 0)
					*p_dest++ = '\0';
				*p_dest = '\0';
				return (dest);
			}
			else
				*p_dest++ = *src++;
		}
	}
	return (dest);
}
