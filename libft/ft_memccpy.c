/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:59:12 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/29 21:55:00 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char*)dest;
	p_src = (unsigned char*)src;
	p = NULL;
	while (n-- > 0)
	{
		*p_dest = *p_src;
		if (*p_dest == (unsigned char)c)
			return (p_dest + 1);
		p_dest++;
		p_src++;
	}
	return (p);
}
