/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:51:06 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 22:31:56 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_12(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("./files/06.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	ret = strcmp(str, "0123456789012345678901234567890123456789012345678901234\
789012345678901234567890123456789012345678901234567890123456789013\
567890123456789012345678901234567890123456789012345678901234567891\
345678901234567890123456789012345678901234567890123456789012345679\
123456789012345678901234567890123456789012345678901234567890123457\
901234567890123456789012345678901234567890123456789012345678901235\
901234567890123456789012345678901234567890123456789012345678901236\
789012345678901234567890123456789012345678901234567890123456789014\
567890123456789012345678901234567890123456789012345678901234567892\
345678901234567890123456789012345678901234567890123456789012345670\
123456789012345678901234567890123456789012345678901234567890123458\
901234567890123456789012345678901234567890123456789012345678901236\
789012345678901234567890123456789012345678901234567890123456789014\
567890123456789");
	if (ret == 0)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
