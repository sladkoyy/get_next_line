/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:59:11 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:06:08 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./include/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = NULL;
	if (!(str = (void*)malloc(sizeof(void*) * size)))
		return (str);
	ft_bzero(str, size);
	return (str);
}
