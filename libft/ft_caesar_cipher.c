/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caesar_cipher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:28:01 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 18:25:25 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	check_lower(char *s, int k, int i)
{
	char c;

	if (s[i] + k > 122)
		c = (k - (122 - s[i])) + 97;
	else
		c = s[i] + k;
	return (c);
}

static char	check_upper(char *s, int k, int i)
{
	char c;

	if (s[i] + k > 90)
		c = (k - (90 - s[i])) + 65;
	else
		c = s[i] + k;
	return (c);
}

static char	*brutus(char *s, char *str, int k)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			str[i] = check_lower(s, k, i);
			i++;
			continue;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			str[i] = check_upper(s, k, i);
			i++;
			continue;
		}
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_caesar_cipher(char *s, int k)
{
	char	*str;

	if (!s || k > 26 || k < 0)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	str = brutus(s, str, k);
	return (str);
}
