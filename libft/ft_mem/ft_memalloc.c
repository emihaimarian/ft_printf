/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:55:41 by mienache          #+#    #+#             */
/*   Updated: 2018/01/14 19:34:10 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;
	void	*tmp;

	m = (void *)malloc(size);
	if (!m)
		return (NULL);
	tmp = m;
	while (size-- > 0)
		*(unsigned char*)tmp++ = 0;
	return (m);
}
