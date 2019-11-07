/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:07:32 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:06:52 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include <stdlib.h>

static int		ft_d_count(int n)
{
	int i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char		*ft_str_solve(char *s, int i, int n, int sign)
{
	s[i] = '\0';
	i--;
	while (i > -1)
	{
		s[i--] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		s[0] = '-';
	return (s);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	i = ft_d_count(n);
	if (sign == -1)
		i++;
	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str = ft_str_solve(str, i, n, sign);
	return (str);
}
