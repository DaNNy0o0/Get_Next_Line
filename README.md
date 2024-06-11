# Get Next Line

## Descripción

El objetivo de este proyecto es crear una función en C que lea una línea de un archivo descriptor. Esta es una tarea común que se encuentra en muchos proyectos de programación y es un excelente ejercicio para trabajar con archivos, buffers y manejo de memoria en C.

### Función Principal

```
char *get_next_line(int fd);
```

### Funciones Utilitarias

```
- ssize_t find_new_line(char *str)
- char *join_read_data(char *store, char *buffer)
- char *divide_strings(char **store)
- size_t ft_strlen_gnl(char *s)
- void ft_strcpy_gnl(char *dst, char *src)
- void ft_strncpy_gnl(char *dst, char *src, size_t n)
- char *ft_strdup_gnl(char *src)
```

### Requisitos

```
- El proyecto debe manejar múltiples descriptores de archivo simultáneamente.
- El proyecto debe ser capaz de manejar cualquier tamaño de BUFFER_SIZE.
```

# Compilación y Ejecución

### Compilación

Puedes compilar el proyecto con el siguiente comando:

```
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -o get_next_line get_next_line_bonus.c get_next_line_utils_bonus.c
```
