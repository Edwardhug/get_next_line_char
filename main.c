#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	int	fd;
	char	*line;

	fd = open("../../francinette/tests/get_next_line/fsoares/multiple_nl.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break ;
		free(line);
	}
	free(line);
	close (fd);
}