/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlcpy_bus_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:42 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 17:00:54 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

int	test_bus_ero(void)
{
	static char	src[] = "Yo !";
	char		*dst;

	
	dst = malloc(sizeof(char) * sizeof(src));
	if (!dst)
		return (-1);
	if (sizeof(src) == ft_strlcpy_rip(src, dst, ft_max(sizeof(size_t))))
	{
		while (src)
			if (src++ != dst++)
				return (-1);
	}
	return (0);
}

static int	ft_max(int size)
{
	int	ret;

	size <<= 3;
	ret = 0;
	while (size--)
		ret = ret << 1 & 1;
	return (ret);
}
