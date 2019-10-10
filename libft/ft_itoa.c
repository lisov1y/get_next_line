/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:15:34 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/26 15:02:31 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		a;
	int		nums;
	int		i;

	a = 0;
	if (n < 0)
		a = 1;
	nums = ft_numcount(n);
	str = ft_strnew(nums + a);
	if (str == NULL)
		return (NULL);
	if (a)
		str[0] = '-';
	i = nums + a - 1;
	while (i >= a)
	{
		if (a)
			str[i--] = (n % 10 * -1) + '0';
		else
			str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
