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
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -o get_next_line get_next_line.c get_next_line_utils.c
```
### Ejecución

```
./get_next_line <input_file>
```

### Pruebas con Valgrind

Para asegurar la correcta gestión de memoria, se puede utilizar Valgrind:

```
valgrind --leak-check=full --track-origins=yes ./get_next_line <input_file>
```
# Descripción de Funciones

## get_next_line
Esta función es el corazón del proyecto. Lee del descriptor de archivo hasta encontrar una nueva línea (\n) o el final del archivo, y devuelve una cadena que contiene una línea del archivo.

## find_new_line
Busca un carácter de nueva línea en una cadena y devuelve su índice. Si no encuentra una nueva línea, devuelve -1.

## join_read_data
Une el contenido del buffer leído con los datos almacenados previamente en store, y maneja la memoria de manera apropiada.

## divide_strings
Divide la cadena almacenada en dos partes: la línea a devolver y el resto que se mantiene en el almacenamiento para la próxima lectura.

## Funciones Utilitarias
### ft_strlen_gnl, ft_strcpy_gnl, ft_strncpy_gnl, ft_strdup_gnl
Estas funciones auxiliares ayudan a realizar operaciones comunes de manipulación de cadenas y son diseñadas específicamente para ser utilizadas dentro de get_next_line.

# Requisitos de la Parte Bonus

- Desarrollar get_next_line con una sola variable estática.
- Manejar múltiples descriptores de archivo simultáneamente.

