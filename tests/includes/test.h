/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:55:16 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 17:53:10 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEST_H_
# define _TEST_H_
# include "libunit.h"

typedef	struct	s_test_list
{
	char	*f_name;
	char	*test_name;
	int		(*f)(void);
}				t_test_list;

char	*ft_strlcpy_rip(char *src, size_t len);

int	routine_launcher(void);
int	test_ok(void);
int	test_ko(void);
int	test_segfault(void);
int	test_bus_ero(void);
#endif
