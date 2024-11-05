/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:58 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 15:43:58 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int chdig)
{
	if (chdig >= '0' && chdig <= '9')
		return (1);
	if ((chdig >= 'a' && chdig <= 'z')
		|| (chdig >= 'A' && chdig <= 'Z'))
		return (1);
	else
		return (0);
}
