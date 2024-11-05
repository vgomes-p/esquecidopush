/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:16:02 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 17:16:02 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *ltl, size_t lench)
{
	size_t	cntb;
	size_t	cntl;

	cntb = 0;
	cntl = ft_strlen(ltl);
	if (cntl == 0)
		return ((char *)big);
	while (*big && cntb <= lench)
	{
		if (lench - cntb++ >= cntl && !ft_strncmp(big, ltl, cntl))
			return ((char *)big);
		big++;
	}
	return (0);
}
