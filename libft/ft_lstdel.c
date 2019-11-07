/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <dtoy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:45:19 by dtoy              #+#    #+#             */
/*   Updated: 2019/01/16 19:07:01 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./include/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;

	p = *alst;
	if (*alst && alst)
	{
		while (p)
		{
			del(p->content, p->content_size);
			p = p->next;
		}
		free(*alst);
		*alst = NULL;
	}
}
