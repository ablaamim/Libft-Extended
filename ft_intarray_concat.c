/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:29:33 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 18:29:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray s1, t_intarray s2)
{
	int			i;
	int			j;
	t_intarray	s;

	s = ft_intarray_create(s1.len + s2.len);
	i = 0;
	j = 0;
	while (j < s1.len)
	{
		s.data[i] = s1.data[j];
		i++;
		j++;
	}
	j = 0;
	while (j < s2.len)
	{
		s.data[i] = s2.data[j];
		i++;
		j++;
	}
	return (s);
}
