/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:43:46 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 20:56:59 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_02(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("./files/00.txt", O_RDONLY);
	get_next_line(fd);
	str = get_next_line(fd);
	close(fd);
	ret = strcmp(str, "Girls are like Internet Domain names;\n");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
