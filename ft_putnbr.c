/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:59:51 by afournie          #+#    #+#             */
/*   Updated: 2025/11/18 11:24:20 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int	n1;
	int	i;

	i = 0;
	n1 = n;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n1 = -n;
		i++;
	}
	if (n1 <= 9)
	{
		ft_putchar_fd(n1 + '0', 1);
		i++;
	}
	else
	{
		ft_putnbr_fd(n1 / 10, 1);
		ft_putnbr_fd(n1 % 10, 1);
	}
	return (i);
}

int	ft_putnbr_udesc(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		count++;
	}
	else
	{
		ft_putnbr_udesc(n / 10);
		ft_putnbr_udesc(n % 10);
		count += 2;
	}
	return (count);
}
