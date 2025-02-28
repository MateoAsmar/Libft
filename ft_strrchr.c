/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:16:56 by masmar            #+#    #+#             */
/*   Updated: 2024/06/11 13:24:39 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	*tm;

	tm = 0;
	while (*str)
	{
		if (*str == (char) c)
			tm = str;
		str++;
	}
	if (*str == (char) c)
		return ((char *) str);
	else
		return ((char *) tm);
}
