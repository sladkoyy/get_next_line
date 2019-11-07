/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:35:35 by dtoy              #+#    #+#             */
/*   Updated: 2018/12/04 20:03:52 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	int count;

	res = 0;
	count = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\v') ||
			(*str == '\n') || (*str == '\f') || (*str == '\r'))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*str++ == '-')
			sign = -1;
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + (*str - '0');
		count++;
		str++;
	}
	if (count < 20)
		return (res * sign);
	else if (sign != -1)
		return (-1);
	return (0);
}
