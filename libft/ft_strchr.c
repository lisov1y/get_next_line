/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:04:17 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/22 19:34:56 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;
	int		i;

	str = (char *)s;
	cc = (char)c;
	i = 0;
	while (str[i] != '\0' && str[i] != cc)
		i++;
	if (str[i] == cc)
		return (str + i);
	return (NULL);
}
