// ! Entrada desde archivo .txt

#include "get_next_line.h"

int main()
{
	int count;

	count = 0;
    int fd = open("Quijote.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("Failed to open file\n");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
		count++;
        printf("[%d]: %s\n", count, line);
        free(line);
    }

    close(fd);
    return 0;
}

// ! Entrada desde teclado

// int main() {
//     char *line;

//     printf("Enter text (Ctrl+D to end):\n");
//     while ((line = get_next_line(STDIN_FILENO)) != NULL) {
//         printf("You entered: %s\n", line);
//         free(line); 
//     }

//     return 0;
// }