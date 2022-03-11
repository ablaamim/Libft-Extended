/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:25:47 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/11 19:03:22 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ft_intarray_add(t_intarray tab, int value)
{
	if (tab->len >= tab->alloc)
	{
		write(2, "Error : Not enough space allocated\n", 35);
		return ;
	}
	tab->data[tab->len] = value;
	tab->len++;
}
