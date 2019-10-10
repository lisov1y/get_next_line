/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:07:30 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 13:51:47 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = -1;
	if (csrc < cdst)
		while ((int)(--len) >= 0)
			*(cdst + len) = *(csrc + len);
	else
		while (++i < len)
			*(cdst + i) = *(csrc + i);
	return (cdst);
}
