/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:29 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:05:21 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_05(void)
{
	char	*str;

	str = get_next_line(10000);
	if (!str)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
