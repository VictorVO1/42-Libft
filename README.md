*Este proyecto ha sido creado como parte del currículo de 42 por vvalenzu.*

# Libft

# 📖 Descripción

`libft` es una librería en C desarrollada como parte del currículo de 42.  
El objetivo del proyecto es reimplementar funciones fundamentales de la librería estándar de C, comprender su funcionamiento interno y crear una base reutilizable para futuros proyectos.

La librería incluye:

- Funciones de manipulación de caracteres
- Funciones de strings
- Gestión de memoria
- Conversión de tipos
- Funciones de escritura en file descriptors
- Implementación de listas enlazadas simples

Este proyecto permite profundizar en conceptos esenciales del lenguaje C como:

- Punteros
- Memoria dinámica
- Modularidad
- Estructuras de datos
- Librerías estáticas

Todas las funciones están declaradas en `libft.h`.

---

## 📚 Descripción detallada de la librería

### Funciones implementadas

## Caracteres

| Función | Prototipo | Descripción |
|---|---|---|
| ft_isalpha | `int ft_isalpha(int c);` | Comprueba si el carácter es una letra (A-Z, a-z) |
| ft_isdigit | `int ft_isdigit(int c);` | Comprueba si el carácter es un dígito (0-9) |
| ft_isalnum | `int ft_isalnum(int c);` | Comprueba si el carácter es alfanumérico |
| ft_isascii | `int ft_isascii(int c);` | Comprueba si el carácter pertenece a ASCII |
| ft_isprint | `int ft_isprint(int c);` | Comprueba si el carácter es imprimible |
| ft_toupper | `int ft_toupper(int c);` | Convierte un carácter a mayúscula |
| ft_tolower | `int ft_tolower(int c);` | Convierte un carácter a minúscula |

---

## Strings

| Función | Prototipo | Descripción |
|---|---|---|
| ft_strlen | `size_t ft_strlen(const char *s);` | Devuelve la longitud de un string |
| ft_strlcpy | `size_t ft_strlcpy(char *dst, const char *src, size_t size);` | Copia string con límite de tamaño |
| ft_strlcat | `size_t ft_strlcat(char *dst, const char *src, size_t size);` | Concatena strings con límite de tamaño |
| ft_strchr | `char *ft_strchr(const char *s, int c);` | Busca la primera aparición de un carácter |
| ft_strrchr | `char *ft_strrchr(const char *s, int c);` | Busca la última aparición de un carácter |
| ft_strncmp | `int ft_strncmp(const char *s1, const char *s2, size_t n);` | Compara dos strings hasta n caracteres |
| ft_strnstr | `char *ft_strnstr(const char *big, const char *little, size_t len);` | Busca substring dentro de string |
| ft_strdup | `char *ft_strdup(const char *s1);` | Duplica un string con malloc |
| ft_substr | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Extrae subcadena |
| ft_strjoin | `char *ft_strjoin(char const *s1, char const *s2);` | Une dos strings |
| ft_strtrim | `char *ft_strtrim(char const *s1, char const *set);` | Elimina caracteres del inicio y final |
| ft_split | `char **ft_split(char const *s, char c);` | Divide string en array usando delimitador |
| ft_strmapi | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Aplica función ( f ) a cada carácter creando nuevo string |
| ft_striteri | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Aplica función ( f ) a cada carácter con índice |

---

## Memoria

| Función | Prototipo | Descripción |
|---|---|---|
| ft_memset | `void *ft_memset(void *b, int c, size_t len);` | Rellena memoria con un valor |
| ft_bzero | `void ft_bzero(void *s, size_t n);` | Pone a cero un bloque de memoria |
| ft_memcpy | `void *ft_memcpy(void *dst, const void *src, size_t n);` | Copia memoria (sin solapamiento) |
| ft_memmove | `void *ft_memmove(void *dst, const void *src, size_t len);` | Copia memoria (segura con solapamiento) |
| ft_memchr | `void *ft_memchr(const void *s, int c, size_t n);` | Busca un byte en memoria |
| ft_memcmp | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | Compara bloques de memoria |
| ft_calloc | `void *ft_calloc(size_t count, size_t size);` | Reserva memoria inicializada a cero |

---

## Conversión

| Función | Prototipo | Descripción |
|---|---|---|
| ft_atoi | `int ft_atoi(const char *nptr);` | Convierte string a entero |
| ft_itoa | `char *ft_itoa(int n);` | Convierte entero a string |

---

## Output

| Función | Prototipo | Descripción |
|---|---|---|
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd);` | Escribe un carácter en file descriptor |
| ft_putstr_fd | `void ft_putstr_fd(char *s, int fd);` | Escribe string en file descriptor |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd);` | Escribe string con salto de línea |
| ft_putnbr_fd | `void ft_putnbr_fd(int n, int fd);` | Escribe un número en file descriptor |

---

## Listas enlazadas

| Función | Prototipo | Descripción |
|---|---|---|
| ft_lstnew | `t_list *ft_lstnew(void *content);` | Crea un nuevo nodo |
| ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new);` | Añade nodo al inicio |
| ft_lstsize | `int ft_lstsize(t_list *lst);` | Cuenta nodos de la lista |
| ft_lstlast | `t_list *ft_lstlast(t_list *lst);` | Devuelve último nodo |
| ft_lstadd_back | `void ft_lstadd_back(t_list **lst, t_list *new);` | Añade nodo al final |
| ft_lstdelone | `void ft_lstdelone(t_list *lst, void (*del)(void*));` | Elimina un nodo |
| ft_lstclear | `void ft_lstclear(t_list **lst, void (*del)(void*));` | Limpia toda la lista |
| ft_lstiter | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Aplica función ( f ) a cada nodo |
| ft_lstmap | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Crea nueva lista aplicando función ( f ) |

## 🔗 Listas enlazadas

La librería incluye una implementación de listas enlazadas simples utilizando la siguiente estructura:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
Estas funciones permiten:

- Crear nodos
- Añadir elementos al inicio o final
- Recorrer listas
- Eliminar nodos
- Limpiar memoria
- Aplicar funciones sobre cada elemento

---

# ⚙️ Instrucciones

### Instalación

```bash
git clone git@github.com:VictorVO1/42-Libft.git
cd 42-Libft
make
```

### Compilación
```bash
make        # Compila la librería
make clean  # Elimina archivos objeto
make fclean # Elimina archivos objeto y libft.a
make re     # Recompila todo
```
Esto generará:
```bash
libft.a
```
## 🚀 Ejemplo de uso
### main.c
```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hola libft");
    printf("%s\n", str);
    free(str);
    return (0);
}
```
## Compilar el ejemplo
```bash
gcc main.c libft.a -I
```
## Ejecutar
```
./a.out
```
# 📚 Recursos
### Documentación
- **Manual de libc**: https://man7.org/linux/man-pages/
- **Tutorial de C**: https://www.w3schools.com/c/
- **cppreference**: https://en.cppreference.com/w/c
---