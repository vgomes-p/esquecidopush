/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:58 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/04 15:25:03 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cntwd(const char *str, char ch)
{
	int	cnt;
	int	tgr;

	cnt = 0;
	tgr = 0;
	while (*str)
	{
		if (*str != ch && tgr == 0)
		{
			tgr = 1;
			cnt++;
		}
		else if (*str == ch)
			tgr = 0;
		str++;
	}
	return (cnt);
}

static char	*wddup(const char *str, int start, int fin)
{
	char	*word;
	int		cnt;

	cnt = 0;
	word = malloc((fin - start) * sizeof(char));
	while (start < fin)
		word[cnt++] = str[start++];
	word[cnt] = '\0';
	return (word);
}

char	**ft_split(char const *str, char ch)
{
	size_t	cnt0;
	size_t	cnt1;
	int		index;
	char	**split;

	split = malloc((cntwd(str, ch) + 1) * sizeof(char *));
	if (!str || !split)
		return (0);
	cnt0 = 0;
	cnt1 = 0;
	index = -1;
	while (cnt <= ft_strlen(str))
	{
		if (str[cnt0] != ch && index < 0)
			index = cnt0;
		else if ((str[cnt0] == ch || cnt0 == ft_strlen(str)) && index >= 0)
		{
			split[cnt1++] = wddup(str, index, cnt0);
			index = -1;
		}
		cnt0++;
	}
	split[cnt1] = 0;
	return (split);
}
