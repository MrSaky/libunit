/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:33 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 20:29:33 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_01(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("text.txt", O_RDONLY);
	str = get_next_line(fd);
	ret = strcmp(str, "There is no place like 127.0.0.1.\n");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
