/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:17:06 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:05:00 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

static int		ft_w_len(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static int		ft_w_ch(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static int		ft_w_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] == c)
		return (count);
	return (count + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		l_w;
	int		l_ch;
	int		start;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	if (s[i] == '\0')
		if ((str = ft_memalloc(sizeof(char*) * 1)))
			return (str);
	if (!(str = (char**)ft_memalloc(sizeof(char*) * (ft_w_count(s, c) + 1))))
		return (str);
	start = ft_w_ch(s, c);
	while (i < ft_w_count(s, c))
	{
		str[i++] = ft_strsub(s, start, ft_w_len(&s[start], c));
		l_w = ft_w_len(&s[start], c) + start;
		l_ch = ft_w_ch(&s[l_w], c);
		start = l_w + l_ch;
	}
	str[i] = 0;
	return (str);
}
