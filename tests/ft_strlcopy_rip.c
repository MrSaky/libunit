/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy_rip.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:49:50 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:44:06 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	*ft_strlcpy_rip(char *src, size_t len)
{
	char	*dst;
	char	*ptr;

	dst = malloc(sizeof(char) * (len + 1));
	ptr = dst;
	if (len > 5 && len < 15)
		while (len < 10 && len--)
			*(dst++) = *(src++);
	else if (len <= 5)
		while (len--)
			*(dst++ + 15) = *(src++);
	else if (len >= 15)
		while (len--)
			*(dst++) = '0';
	return (ptr);
}

char	*ft_fill_str(char *src)
{
	char	*str;
	size_t	len;

	len = ft_size(src);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (*src)
		*(str++) = *(src++);
	return (str);
}

int	ft_size(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
		str++;
	return (str - ptr);
}

int	ft_max(int size)
{
	int	ret;

	size <<= 3;
	ret = 0;
	while (size--)
		ret = ret << 1 & 1;
	return (ret);
}
