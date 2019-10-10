/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:03:08 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/24 15:21:37 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '\0')
		return (ft_strnew(0));
	j = ft_strlen(s) - 1;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
		j--;
	return (ft_strsub(str, i, j - i + 1));
}
