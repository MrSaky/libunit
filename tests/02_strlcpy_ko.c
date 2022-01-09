/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_ko.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:53:48 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 16:37:27 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_ko(void)
{
	static char	src[] = "salut les copinoux";
	char		*dst;

	
	dst = malloc(sizeof(char) * sizeof(src));
	if (!dst)
		return (-1);
	if (sizeof(src) == ft_strlcpy_rip(src, dst, sizeof(src)))
	{
		while (src)
			if (src++ != dst++)
				return (-1);
	}
	return (0);
}
