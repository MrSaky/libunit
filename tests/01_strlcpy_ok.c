/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcpy_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:34:15 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:39:40 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_ok(void)
{
	char	*src;
	char	*dst;

	src = ft_fill_str("salut !");
	dst = ft_strlcpy_rip(src, sizeof(src));
	while (src)
		if (src++ != dst++)
			return (-1);
	return (0);
}
