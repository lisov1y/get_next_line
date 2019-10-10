/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:49:49 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/22 14:44:33 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nbl;

	nbl = n;
	if (nbl >= -2147483648 && nbl <= 2147483647)
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nbl *= -1;
		}
	if (nbl > 9)
		ft_putnbr_fd(nbl / 10, fd);
	ft_putchar_fd(nbl % 10 + '0', fd);
}
