/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:46:23 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/25 13:38:51 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hstck;
	char	*ndl;

	hstck = (char *)h;
	ndl = (char *)n;
	if (ndl[0] == '\0' || ndl == NULL)
		return (hstck);
	i = 0;
	while (hstck[i] != '\0' && i < len)
	{
		j = 0;
		while (ndl[j] == hstck[i + j] && i + j < len)
		{
			if (ndl[j + 1] == '\0')
				return (hstck + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
