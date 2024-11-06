/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:52 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:57:52 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*ftn)(unsigned int, char))
{
	int		cnt;
	char	*result;

	if (!str || !ftn)
		return (NULL);
	cnt = -1;
	result = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (str[++cnt])
		result[cnt] = ftn(cnt, str[cnt]);
	result[cnt] = '\0';
	return (result);
}
