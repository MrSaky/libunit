/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_gnl_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:57:35 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 14:58:37 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "get_next_line.h"

int	gnl_launcher(void)
{
	t_unit_test	*tests;

	load_test();
	return (launch_tests(&tests));
}