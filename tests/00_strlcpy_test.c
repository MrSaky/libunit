/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:59 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 17:04:45 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	routine_launcher(void)
{
	int					i;
	static t_test_list	list[]={
		{"strlcpy", "ok_test", &test_ok},
		{"strlcpy", "ko_test", &test_ko},
		{"strlcpy", "sigsev_test", &test_segfault},
		{"strlcpy", "bus_e_test", &test_but_ero}}
	t_unit_test			*tests;

	i = 0;
	while (i < sizeof(list))
		load_test(list[i].f_name, list[i].test_name, list[i].f);
	return (launch_test(&tests));
}
