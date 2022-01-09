#include "get_next_line.h"
#include "gnl_test.h"

int	gnl_test_01(void)
{
	char	*str;
	int		fd;
	int		ret;

	fd = -1;
	fd = open("test.txt", fd, O_RDONLY);
	str = get_next_line(fd);
	ret = strcmp(str, "There is no place like 127.0.0.1.");
	if (ret == 1)
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}