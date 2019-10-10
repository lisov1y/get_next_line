/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 15:14:17 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 15:40:05 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	*str_rev;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	str_rev = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	len--;
	while (len >= 0)
	{
		str_rev[i] = str[len];
		i++;
		len--;
	}
	str_rev[i] = '\0';
	return (str_rev);
}
