/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:17 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 20:57:57 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_03(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("./files/00.txt", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	str = get_next_line(fd);
	close(fd);
	ret = strcmp(str, "the ones I like are already taken.");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
