/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:59 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 21:34:25 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	routine_launcher(void)
{
	unsigned long	i;
	static t_test_list	list[]={
		{"ok_test", "ft_dummy", &test_ok},
		{"ko_test", "ft_dummy", &test_ko},
		{"sigsev_test", "ft_dummy", &test_segfault},
		{"bus_e_test", "ft_dummy", &test_bus_error}};
	
	t_unit_test			*tests;

	i = 0;
	while (i < 4)
	{
		load_test(&tests, list[i].test_name, list[i].f_name, list[i].f);
		++i;
	}
	return (launch_tests(&tests));
}
