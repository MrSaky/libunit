/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:48:30 by athierry          #+#    #+#             */
/*   Updated: 2022/01/08 20:58:44 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBUNIT_H_
# define _LIBUNIT_H_
# define TEST_FAILLURE -1
# define TEST_SUCCESS 0

# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

typedef struct s_unit_test
{
	struct s_unit_test	*next;
	char				*test_name;
	char				*f_name;
	int					(*f)(void);
}				t_unit_test;

int			launch_tests(t_unit_test **test);
void		load_test(t_unit_test *tests, char *test_name, char *f_name, int (*f)(void));

#endif