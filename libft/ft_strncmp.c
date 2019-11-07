/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:26:11 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/29 20:32:25 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (*ps1 == '\0' || *ps2 == '\0')
		return (*ps1 - *ps2);
	while (n-- > 0)
	{
		if (*ps1 != *ps2 || *ps1 == '\0' || *ps2 == '\0')
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
	}
	return (0);
}
