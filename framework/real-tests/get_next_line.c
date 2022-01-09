/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:18:48 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/06 10:57:02 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_memset(char *mem, int fd)
{
	char	buff[BUFFER_SIZE + 1];
	int		csr;

	csr = 1;
	while (ft_strchr(mem, '\n') < 1 && csr)
	{
		csr = read(fd, buff, BUFFER_SIZE);
		if (csr < 0)
			return (NULL);
		buff[csr] = 0;
		mem = ft_strjoin(mem, buff);
	}
	return (mem);
}

char	*ft_cur_line(char *str)
{
	char		*ret;
	int			i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	ret = (char *)malloc(sizeof(*ret) * (i + 2));
	if (!ret)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ret[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_next_line(char *str)
{
	char		*ret;
	int			i;
	int			j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) - i));
	if (!ret)
		return (NULL);
	j = i + 1;
	while (str[++i])
		ret[i - j] = str[i];
	ret[i - j] = '\0';
	free(str);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*mem = NULL;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	mem = ft_memset(mem, fd);
	if (!mem)
	{
		free(mem);
		return (NULL);
	}
	ret = ft_cur_line(mem);
	mem = ft_next_line(mem);
	return (ret);
}
