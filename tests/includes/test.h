/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:17:24 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 18:44:47 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEST_H_
# define _TEST_H_
#include <unistd.h>
#include "libunit.h"
typedef struct	s_test_list
{
	char	*test_name;
	char	*f_name;
	int		(*f)(void);
}				t_test_list;

char	*ft_strlcpy_rip(char *src, size_t len);
char	*ft_fill_str(char *src);
int		ft_size(char *str);
int		ft_max(int size);

int	routine_launcher(void);

int	test_ok(void);
int	test_ko(void);
int	test_segfault(void);
int	test_bus_error(void);

#endif
