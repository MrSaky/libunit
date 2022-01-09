/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_segfault.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:07 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 16:09:48 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h

int	test_ok(void)
{
	static char	src[] = "Yo !";
	char		*dst;

	
	dst = malloc(sizeof(char) * sizeof(src));
	if (!dst)
		return (-1);
	if (sizeof(src) == ft_strlcpy_rip(src, dst, ft_max(sizeof(src))))
	{
		while (src)
			if (src++ != dst++)
				return (-1);
	}
	return (0);
}
