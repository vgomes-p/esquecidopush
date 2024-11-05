/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:33 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:49:33 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsz)
{
	size_t	cntx;
	size_t	cnt0;
	size_t	cnt1;

	cntx = 0;
	cnt0 = ft_strlen(dest);
	cnt1 = ft_strlen(src);
	if (destsz <= cnt0)
		return (cnt1 + destsz);
	while (src[cntx] && (cnt0 + 1) < destsz)
		dest[cnt0++] = src[cntx++];
	dest[cnt0] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[cntx]));
}
