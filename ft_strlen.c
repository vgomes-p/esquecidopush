/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:56:33 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:56:33 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *var)
{
	size_t	cnt;

	cnt = 0;
	while (var[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
