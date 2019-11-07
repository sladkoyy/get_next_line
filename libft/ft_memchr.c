/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:00:35 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/26 20:30:30 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	p = NULL;
	i = 0;
	while (n-- > 0)
	{
		if (*((unsigned char*)str + i) == ((unsigned char)c))
		{
			p = ((unsigned char*)str + i);
			return (p);
		}
		i++;
	}
	return (p);
}
