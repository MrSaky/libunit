/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:22 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:05:16 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_04(void)
{
	char	*str;

	str = get_next_line(-1);
	if (!str)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
