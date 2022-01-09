/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:32:47 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 18:59:32 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <fcntl.h>
#include <stdarg.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strchr(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

static void	ft_putstr_fd(const char *s, int len, int fd)
{
	if (len == -1)
		len = ft_strlen(s);
	write(fd, s, len);
}

void	sm_printf(const char *ctx, ...)
{
	va_list	args;
	char	*next;
	size_t	len;

	va_start(args, ctx);
	next = ft_strchr(ctx, '%');
	while (next)
	{
		ft_putstr_fd((char *)ctx, (len = (size_t)(next - ctx)), 1);
		ctx += len + 1;
		if (*ctx == 's')
			ft_putstr_fd(va_arg(args, char *), -1, 1);
		else
			ft_putstr_fd("%", -1, 1);
		ctx++;
		next = ft_strchr(ctx, '%');
	}
	va_end(args);
	ft_putstr_fd((char *)ctx, -1, 1);
}
