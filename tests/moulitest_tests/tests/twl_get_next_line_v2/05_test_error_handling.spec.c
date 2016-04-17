#include <project.h>
#include <fcntl.h>
#include "twl_get_next_line.h"

static void simple_string(t_test *test)
{
    char 	*line = NULL;
    char	*remainder = NULL;

	mt_assert(twl_get_next_line_v2(-99, NULL, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(-1, NULL, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(-10000, NULL, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(1, NULL, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(99, NULL, &remainder) == -1);

	mt_assert(twl_get_next_line_v2(-99, &line, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(-1, &line, &remainder) == -1);
	mt_assert(twl_get_next_line_v2(-10000, &line, &remainder) == -1);

	/* Not opened fd */
	mt_assert(twl_get_next_line_v2(42, &line, &remainder) == -1);
}

void	suite_05_test_error_handling(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_string);
}
