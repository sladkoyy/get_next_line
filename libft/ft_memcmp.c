/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:46:49 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/28 17:06:59 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	i = 0;
	while (n-- > 0)
	{
		if (*((unsigned char*)ps1 + i) != *((unsigned char*)ps2 + i))
			return (*((unsigned char*)ps1 + i) - *((unsigned char*)ps2 + i));
		i++;
	}
	return (0);
}
