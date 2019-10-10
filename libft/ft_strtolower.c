/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:01:11 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 16:15:12 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtolower(char *str)
{
	char	*str_low;
	int		i;

	if (!str)
		return (NULL);
	if (!(str_low = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str_low[i] = str[i] + 32;
			i++;
			continue;
		}
		str_low[i] = str[i];
		i++;
	}
	str_low[i] = '\0';
	return (str_low);
}
