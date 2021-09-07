/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:32:35 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/29 12:18:35 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)pointer;
	while (i < count)
		c[i++] = (unsigned char)value;
	pointer = (void *)c;
	return (pointer);
}
