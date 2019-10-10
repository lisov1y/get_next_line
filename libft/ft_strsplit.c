/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 10:58:49 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/22 14:24:25 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	number(char const *s, char c)
{
	int	i;
	int	cnt;

	if (s[0] == '\0')
		return (0);
	cnt = 0;
	if (s[0] != c)
		cnt++;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			cnt++;
		i++;
	}
	return (cnt);
}

static int	length(const char *s, char c)
{
	int len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		num;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	num = number(s, c);
	str = (char**)malloc(sizeof(char*) * (num + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		str[i] = ft_strsub(s, j, length(s + j, c));
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	str[i] = NULL;
	return (str);
}
