/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:51:27 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:51:48 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_14(void)
{
	int		fd;
	int		ret;

	fd = open("./files/08.txt", O_RDONLY);
	ret = strcmp(get_next_line(fd), "asd\n");
	if (ret != 0)
		return (TEST_FAILLURE);
	ret = strcmp(get_next_line(fd), "\n");
	if (ret != 0)
		return (TEST_FAILLURE);
	ret = strcmp(get_next_line(fd), "asd\n");
	if (ret != 0)
		return (TEST_FAILLURE);
	return (TEST_SUCCESS);
}
