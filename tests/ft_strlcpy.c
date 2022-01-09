/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:23:17 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 21:11:32 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_bus_errorer(char *str)
{
	while (*str)
		*(str++) = 0;
}

char	ft_dummy(long long i)
{
	char str[] = "Hello World!";
	char *ptr;

	if (i <= 2)
		return (++i);
	else if (i == 3)
	{
		if (*(ptr + 100) == 0)
			*ptr = 1;
	}
	else if (i >= 4)
		ft_bus_errorer("Hello World!");
	return (0);
}
