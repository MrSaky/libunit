#ifndef LIBUNIT_H
# define LIBUNIT_H

# define TEST_SUCCESS 0
# define TEST_FAILLURE -1

# include <unistd.h>
# include <sys/wait.h>
# include <stdlib.h>

/* 
	t_unit_test
*/

typedef struct s_unit_test
{
	char	*test_name;
	char	*f_name;
	int		(*f)(void);
	struct s_unit_test	*next;
}	t_unit_test;

#endif