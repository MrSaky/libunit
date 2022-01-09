/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcpy_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:34:15 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 17:53:54 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_ok(void)
{
	static char	src[] = "salut";
	char		*dst;

	
	dst = malloc(sizeof(char) * sizeof(src));
	if (!dst)
		return (-1);
	if (sizeof(src) == ft_strlcpy_rip(src, sizeof(src)))
	{
		while (src)
			if (src++ != dst++)
				return (-1);
	}
	return (0);
}
