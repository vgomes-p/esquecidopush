/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:03:41 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:03:41 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numby)
{
	long int	cnt;

	cnt = -1;
	if (!dest && !src)
		return (NULL);
	while (++cnt < (long int)numby)
		*(char *)(dest + cnt) = *(char *)(src + cnt);
	return (dest);
}
