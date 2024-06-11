// ! Entrada desde archivo .txt

#include "get_next_line_bonus.h"

int	main(void)
{
	char	*line;
	int		i;

	int fd1, fd2, fd3;
	fd1 = open("file1.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);
	fd3 = open("file3.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		perror("Error opening file");
		return (1);
	}
	for (i = 0; i < 3; i++)
	{
		line = get_next_line(fd1);
		if (line)
		{
			printf("file1.txt: %s", line);
			free(line);
		}
		line = get_next_line(fd2);
		if (line)
		{
			printf("file2.txt: %s", line);
			free(line);
		}
		line = get_next_line(fd3);
		if (line)
		{
			printf("file3.txt: %s", line);
			free(line);
		}
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
