/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dummy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:34:43 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 21:50:29 by athierry         ###   ########.fr       */
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
	static char	str[] = "Hello World!";
	char		*ptr;

	ptr = str;
	if (i <= 2)
		return (++i);
	else if (i == 3)
		while (*ptr != '\n')
			ptr++;
	else if (i >= 4)
		ft_bus_errorer("Hello World!");
	return (0);
}
