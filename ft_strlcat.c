/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:23:33 by masmar            #+#    #+#             */
/*   Updated: 2024/06/15 13:32:12 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = ft_strlen(dst);
	j = 0;
	res = ft_strlen(src);
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
