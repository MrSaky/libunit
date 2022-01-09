/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_segfault.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:07 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:40:13 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_segfault(void)
{
	char	*src;
	char	*dst;

	src = ft_fill_str("Yo!");
	dst = ft_strlcpy_rip(src, sizeof(src));
	while (src)
		if (src++ != dst++)
			return (-1);
	return (0);
}
