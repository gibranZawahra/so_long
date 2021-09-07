/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:32:28 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/29 12:35:46 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)destination;
	str2 = (unsigned char *)source;
	if (!size || destination == source)
		return (destination);
	while (size--)
		*str1++ = *str2++;
	return (destination);
}
