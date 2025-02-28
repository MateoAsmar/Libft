/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 09:50:55 by masmar            #+#    #+#             */
/*   Updated: 2024/06/15 14:17:19 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*j;
	char	*str;

	i = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (i + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	j = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (j);
}
