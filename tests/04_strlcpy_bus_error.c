/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlcpy_bus_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:42 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 21:09:09 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

int	test_bus_error(void)
{
	if (ft_dummy(4) == 0)
		return (0);
	return (-1);
}
