/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:26:24 by afournie          #+#    #+#             */
/*   Updated: 2025/11/17 17:40:14 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hexa_low(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hexa_low(n / 16);
	ft_putchar_fd("0123456789abcdef"[n % 16], 1);
	count++;
	return (count);
}

int	ft_putnbr_hexa_up(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hexa_up(n / 16);
	ft_putchar_fd("0123456789ABCDEF"[n % 16], 1);
	count++;
	return (count);
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

int	ft_print_ptr(unsigned long long int adress)
{
	if (adress == 0)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + ft_putnbr_hexa_low(adress));
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i);
}
