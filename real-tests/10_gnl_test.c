/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:55 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:12:39 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_10(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("./files/text.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	ret = strcmp(str, "01234567890123456789012345678901234567890\n");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
