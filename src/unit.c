/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:08 by shocquen          #+#    #+#             */
/*   Updated: 2022/01/08 23:04:57 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdio.h> //TODO rm

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
	return  (ret);
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

// TODO
static void run_test(t_unit_test *test) 
{
	if (test->next)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

int		launch_tests(t_unit_test **test)
{
	while(*test)
	{
		int ret;
		int	signal;

		ret = fork();
		if (!ret)
			run_test(*test);
		else if (ret < 0)
		{
			printf(0, "We got in trouble at fork ^^\n");
		}
		else
		{
			ret = wait(&signal);
			if (!ret)
				return (-1);
			//TODO: remove printf("pid: %d\nsignal: %d\n", ret, signal);
			// printf
		}
		*test = (*test)->next;
	}
	return (TEST_SUCCESS);
}

void	load_test(t_unit_test **tests, char *test_name, char *f_name, int (*f)(void))
{
	if (!*tests)
	{
		*tests = test_new(test_name, f_name, f);
		if (!*tests)
			printf("ERRO LOAD TEST\n");
	}
	else
		test_append(tests, test_new(test_name, f_name, f));
}