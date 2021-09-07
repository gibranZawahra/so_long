/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:32:07 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/29 12:35:18 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	b;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	b = (unsigned char)c;
	while (n--)
	{
		if (str[i] == b)
			return (str + i);
		i++;
	}
	return (NULL);
}
