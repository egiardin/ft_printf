/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiardin <egiardin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:09:14 by egiardin          #+#    #+#             */
/*   Updated: 2025/02/08 15:10:22 by egiardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_count(int n)
{
	int	j;

	j = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		j++;
	}
	while (n != 0)
	{
		j++;
		n = n / 10;
	}
	return (j);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*nb;
	long	n;
	int		sign;

	n = (long)nbr;
	len = ft_count(n);
	nb = malloc(len + 1);
	if (!nb)
		return (0);
	nb[len] = '\0';
	sign = 0;
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
		sign = 1;
	}
	while (len > sign)
	{
		nb[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (nb);
}
