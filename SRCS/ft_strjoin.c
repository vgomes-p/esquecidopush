/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:45:56 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:45:56 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str0, char const *str1)
{
	char	*nwstr;
	size_t	cnt0;
	size_t	cnt1;

	cnt0 = ft_strlen(str0);
	cnt1 = ft_strlen(str1);
	nwstr = malloc((cnt0 + cnt1 + 1) * sizeof(char));
	if (nwstr == NULL)
		return (NULL);
	ft_strlcpy(nwstr, str0, cnt0 + 1);
	ft_strlcpy(&nwstr[cnt0], str1, cnt1 + 1);
	return (nwstr);
}
