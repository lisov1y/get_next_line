/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:39:37 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:43:29 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	char	*str2;
	int		i;
	int		len;

	str1 = (char *)s1;
	len = 0;
	while (str1[len] != '\0')
		len++;
	if (!(str2 = (char*)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
