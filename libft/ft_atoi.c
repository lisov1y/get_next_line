/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:57:26 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 13:54:33 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	long	result;
	long	prev;
	int		a;

	a = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
		a = -1;
	if (*str == '+' || *str == '-')
		str++;
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
	{
		prev = result;
		result = result * 10 + *str++ - '0';
		if (prev > result)
		{
			if (a == 1)
				return (-1);
			return (0);
		}
	}
	return (result * a);
}
