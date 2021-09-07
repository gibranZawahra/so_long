/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:33:59 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/29 12:39:13 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > (size_t)ft_strlen(s1))
		n = (size_t)ft_strlen(s1) + 1;
	if (n > (size_t)ft_strlen(s2))
		n = (size_t)ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, n));
}
