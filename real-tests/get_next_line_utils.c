/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:09:59 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/02 14:46:33 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (i);
			i++;
		}
	}
	return (-1);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = 0;
	}
	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		ret[i] = s1[i];
	}
	j = -1;
	while (s2[++j])
		ret[j + i] = s2[j];
	ret[j + i] = 0;
	free(s1);
	return (ret);
}
