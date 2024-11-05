/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:36:15 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:36:15 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str0)
{
	int		cnt;
	char	*str1;

	cnt = 0;
	str1 = malloc(ft_strlen(str0) + 1);
	if (!str0)
		return (NULL);
	while (*str0)
		str1[cnt++] = *str0++;
	str1[cnt] = '\0';
	return (str1);
}
