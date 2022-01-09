#include <libunit.h>

/* –––––––––– TESTS –––––––––– */

#include <string.h>

/* print all the tests */
/* static inline void	show_tests(t_unit_test *test)
{
	while (test)
	{
		printf("%s: %s : %d\n", test->test_name, test->f_name, test->f());
		test = test->next;
	}
} */

static int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
#include <stdio.h>
static inline int foo_f(void)
{
	int	i;

	i = (ft_strlen("helo") == strlen("hello"));
	if (i)
		return(TEST_SUCCESS);
	return (TEST_FAILLURE);
}


int main(int argc, char **argv)
{

	if (argc > 2)
	{
		t_unit_test *foo;

		foo = NULL;
		for (int i = 2; i < argc; i += 2)
			load_test(&foo, argv[i - 1], argv[i], &foo_f);
		// show_tests(foo);
		return (launch_tests(&foo));
	}
}