/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:46 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:09:11 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_08(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("./files/02.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	ret = strcmp(str, "0123456789012345678901234567890123456789\n");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
