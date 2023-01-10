#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	int	fd;
	char	*line;

	fd = open("test/joe_dassin", O_RDONLY);
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