/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:50:38 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:07:57 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_07(void)
{
	char	*str;
	int		fd;

	fd = open("./files/01.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	if (!str)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
