/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_ko.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:53:48 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:40:00 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_ko(void)
{
	char	*src;
	char	*dst;

	src = ft_fill_str("salut ca va ?");
	dst = ft_strlcpy_rip(src, sizeof(src));
	while (src)
		if (src++ != dst++)
			return (-1);
	return (0);
}
