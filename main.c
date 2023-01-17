#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	int	fd;
	char	*line;
	int		fd_empty;

	// fd = open("../../../francinette/tests/get_next_line/fsoares/empty.txt", O_RDONLY);
	fd = open("test/joe_dassin", O_RDONLY);
	fd_empty = open("test/empty_newline", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd_empty);
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break ;
		free(line);
	}
	// while (1)
	// {
	// 	line = get_next_line(fd_empty);
	// 	printf("%s", line);
	// 	if (!line)
	// 		break ;
	// 	free(line);
	// }

	free(line);
	close (fd);
}