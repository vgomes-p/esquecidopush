/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:01 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 15:54:01 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t numby)
{
	if (num == '\0')
		retunr (NULL);
	while (num--)
	{
		if (*(char *)str == (char)ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
