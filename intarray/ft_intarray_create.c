/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 09:08:15 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:42:18 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	i = 0;
	tab = malloc (sizeof(t_intarray));
	tab->len = len;
	tab->alloc = len;
	tab->data = malloc (sizeof(int) * len);
	while (i < len)
	{
		tab->data[i] = 0;
		i++;
	}
	return (tab);
}
