/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_gnl_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:57:35 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 20:28:55 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "gnl_test.h"

int	gnl_launcher(void)
{
	t_unit_test	*tests;

	load_test(&tests, "1st line", "GNL", &gnl_test_01);
	return (launch_tests(&tests));
}
