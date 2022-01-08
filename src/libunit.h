/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:48:30 by athierry          #+#    #+#             */
/*   Updated: 2022/01/08 20:55:10 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBUNIT_H_
# define _LIBUNIT_H_

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
