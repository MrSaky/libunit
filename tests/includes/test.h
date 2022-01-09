/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:17:24 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 21:19:56 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEST_H_
# define _TEST_H_
#include <unistd.h>
#include <stdlib.h>
#include "libunit.h"
typedef struct	s_test_list
{
	char	*test_name;
	char	*f_name;
	int		(*f)(void);
}				t_test_list;


char	ft_dummy(long long i);
void	ft_bus_errorer(char *str);

int	routine_launcher(void);

int	test_ok(void);
int	test_ko(void);
int	test_segfault(void);
int	test_bus_error(void);

#endif
