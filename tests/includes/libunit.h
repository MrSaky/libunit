/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:48:30 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 20:31:40 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
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

char	*show_result(int signal);

int		launch_tests(t_unit_test **test);
void	load_test(t_unit_test **tests,
			char *test_name, char *f_name, int (*f)(void));

void	sm_printf(const char *ctx, ...);

#endif