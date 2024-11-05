/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:33:45 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 17:33:45 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*nwstr;
	size_t	cnt;

	if (!str)
		return (NULL);
	cnt = ft_strlen(str);
	if (start >= cnt)
		return (ft_strdup(""));
	if (cnt - start >= len)
		nwstr = malloc((len + 1) * sizeof(char));
	else
		nwstr = malloc((cnt - start + 1) * sizeof(char));
	if (nwstr)
	{
		if (len > cnt + 1)
			len = cnt + 1;
		ft_strlcpy(nwstr, (str + start), (len + 1));
	}
	else
		return (NULL);
	return (nwstr);
}
