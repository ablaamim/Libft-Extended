/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:43:08 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/20 18:45:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_print_numbers(int n)
{
	long	nb;

	nb = (long) n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_print_numbers(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
