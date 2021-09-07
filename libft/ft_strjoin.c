/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:33:34 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/29 12:25:27 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	size_s1;
	char	*tab;

	count = -1;
	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	tab = (char *)malloc((size_s1 + ft_strlen(s2) + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s1[++count])
		tab[count] = s1[count];
	count = -1;
	while (s2[++count])
		tab[size_s1 + count] = s2[count];
	tab[size_s1 + count] = '\0';
	return (tab);
}
