/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlcpy_bus_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:42 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:44:15 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

int	test_bus_error(void)
{
	char	*src;
	char	*dst;

	src = ft_fill_str("Salut les copinoux, ca boom ?");
	dst = ft_strlcpy_rip(src, ft_max(sizeof(size_t)));
	while (src)
		if (src++ != dst++)
			return (-1);
	return (0);
}
