/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:03:22 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:03:02 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_isalnum(int ch)
{
	if (ft_isdigit(ch) || ft_isalpha(ch))
		return (1);
	else
		return (0);
}
