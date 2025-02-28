/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:42:50 by masmar            #+#    #+#             */
/*   Updated: 2024/06/11 12:47:46 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
	}
	if (*str == (char) c)
		return ((char *) str);
	return (0);
}
