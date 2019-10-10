/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:15:39 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 16:16:28 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtoupper(char *str)
{
	char	*str_up;
	int		i;

	if (!str)
		return (NULL);
	if (!(str_up = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str_up[i] = str[i] - 32;
			i++;
			continue;
		}
		str_up[i] = str[i];
		i++;
	}
	str_up[i] = '\0';
	return (str_up);
}
