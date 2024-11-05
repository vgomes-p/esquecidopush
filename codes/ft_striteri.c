/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:41:05 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/05 16:41:05 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*ftn)(unsigned int, char*))
{
	int		cnt;

	cnt = -1;
	while (str[++cnt])
		ftn(cnt, &str[cnt]);
}
