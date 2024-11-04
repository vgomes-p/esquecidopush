/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:43:00 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/04 14:59:58 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str0, char const *set)
{
	size_t	cnt;

	if (!str0 || !set)
		return (0);
	while (*str0 && ft_strchr(set, *str0))
		str0++;
	cnt = ft_strlen(str0);
	while (cnt && ft_strchr(set, str0[cnt]))
		cnt--;
	return (ft_substr(str0, 0, cnt + 1));
}
