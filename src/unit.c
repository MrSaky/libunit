#include "libunit.h"
#include <errno.h>

static inline t_unit_test	*test_new(char *test_name, char *f_name, int (*f)(void))
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

static inline void	test_append(t_unit_test **test, t_unit_test *new)
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
	int	ret;

	if (test->next)
		exit(EXIT_FAILURE);
	// *(int*)0 = 0;
	exit(EXIT_SUCCESS);
}

int		launch_tests(t_unit_test **test)
{
	while(test)
	{
		int ret;
		int	signal;

		ret = fork();
		if (!ret)
			run_test(*test);
		else
		{
			ret = wait(&signal);
			printf("pid: %d\nsignal: %d\n", ret, signal);
			if (!ret)
				return (TEST_FAILLURE);
			return (TEST_SUCCESS);
		}
	}
	return (TEST_SUCCESS);
}

void	load_test(t_unit_test *tests, char *test_name, char *f_name, int (*f)(void))
{
	if (!tests)
	{
		tests = test_new(test_name, f_name, f);
		if (!tests)
			printf("ERRO LOAD TEST\n");
	}
	else
		test_append(&tests, test_new(test_name, f_name, f));
}