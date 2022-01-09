/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:08 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/09 22:58:12 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "colors.h"

static t_unit_test	*test_new(char *test_name, char *f_name, int (*f)(void))
{
	t_unit_test	*ret;

	ret = (t_unit_test *)malloc(sizeof(*ret));
	if (!ret)
		return (NULL);
	ret->test_name = test_name;
	ret->f_name = f_name;
	ret->f = f;
	ret->next = NULL;
	return (ret);
}

static void	test_append(t_unit_test **test, t_unit_test *new)
{
	t_unit_test	*tmp;

	tmp = *test;
	if (!tmp)
		*test = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static void	run_test(t_unit_test *test)
{
	int	ret;

	ret = test->f();
	if (ret == TEST_SUCCESS)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}

int	launch_tests(t_unit_test **test)
{
	int	ret;
	int	signal;
	int	count[2];

	*(long *)count = 0;
	while (*test)
	{
		ret = fork();
		if (!ret)
			run_test(*test);
		else
		{
			ret = wait(&signal);
			if (!ret)
				return (-2);
			sm_printf("%s: %s : [%s]\n",
				(*test)->f_name, (*test)->test_name, show_result(signal));
			if (signal == 0)
				count[1]++;
		}
		*test = (*test)->next;
		count[0]++;
	}
	ft_lstclear(test, &free);
	return (check_sum(count));
}

void	load_test(t_unit_test **tests,
	char *test_name, char *f_name, int (*f)(void))
{
	if (!*tests)
	{
		*tests = test_new(test_name, f_name, f);
		if (!*tests)
			sm_printf("%sERRO LOAD TEST%s\n", CYLW, CNO);
	}
	else
		test_append(tests, test_new(test_name, f_name, f));
}
