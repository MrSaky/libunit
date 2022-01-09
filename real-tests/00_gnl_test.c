/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:57:35 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 21:52:56 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "gnl_test.h"

int	gnl_launcher(void)
{
	t_unit_test	*tests;

	load_test(&tests, "basic 1", "GNL", &gnl_test_01);
	load_test(&tests, "basic 2", "GNL", &gnl_test_02);
	load_test(&tests, "basic 3", "GNL", &gnl_test_03);
	load_test(&tests, "invalid fd 1", "GNL", &gnl_test_04);
	load_test(&tests, "invalid fd 2", "GNL", &gnl_test_05);
	load_test(&tests, "try free", "GNL", &gnl_test_06);
	load_test(&tests, "file empty", "GNL", &gnl_test_07);
	load_test(&tests, "41 char with NL", "GNL", &gnl_test_08);
	load_test(&tests, "41 char no NL", "GNL", &gnl_test_09);
	load_test(&tests, "42 char with NL", "GNL", &gnl_test_10);
	load_test(&tests, "42 char no NL", "GNL", &gnl_test_11);
	load_test(&tests, "long line no NL", "GNL", &gnl_test_12);
	load_test(&tests, "long lone with NL", "GNL", &gnl_test_13);
	load_test(&tests, "alternate NL", "GNL", &gnl_test_14);
	load_test(&tests, "multiple NL", "GNL", &gnl_test_15);
	return (launch_tests(&tests));
}
