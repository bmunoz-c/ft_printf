<div align="center">
  
<h1>get_next_line</h1>
  
<img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-ft_printf.png" style="width: 600px; height: 300px;">

</div>

# ft_printf

`ft_printf` es una implementación de la función `printf` en el lenguaje de programación C, desarrollada como parte del plan de estudios de la escuela de programación 42. La función `printf` es una función estándar en C utilizada para formatear y escribir datos en la salida estándar.
Para obtener más detalles sobre cómo se implementó este proyecto, consulta el [resumen del proyecto](https://github.com/bmunoz-c/ft_printf/blob/main/Printf.pdf).

## Descripción del Proyecto

El proyecto `ft_printf` consiste en implementar una versión personalizada de la función `printf` de la biblioteca estándar de C. Esta función permite imprimir texto formateado en la consola o redirigirlo a un archivo o un buffer de memoria.

El objetivo principal del proyecto es familiarizarse con conceptos avanzados de manipulación de cadenas de caracteres y argumentos variables en C, así como también mejorar las habilidades de gestión de memoria y organización del código.

## Características Principales

- **Formatos Específicos**: Permite formatear la salida utilizando especificadores de formato como `%s`, `%d`, `%f`, `%c`, `%x`, `%o`, entre otros, de manera similar a la función `printf` estándar.
  
- **Modificadores de Longitud**: Admite modificadores de longitud como `l`, `ll`, `h`, `hh` para trabajar con diferentes tipos de datos, como enteros largos, enteros cortos, etc.
  
- **Precisión y Ancho de Campo**: Permite especificar la precisión y el ancho del campo para controlar la cantidad de caracteres impresos y el formato de números de punto flotante.
  
- **Manejo de Banderas**: Implementa el manejo de banderas como `+`, `-`, `0`, `#`, para controlar la justificación, el relleno, la alineación y otros aspectos de la salida.

## Uso

El uso de `ft_printf` es similar al de la función `printf` estándar:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("The answer is %d\n", 42);
    return 0;
}
```

## Instalación

Para utilizar `ft_printf`, simplemente incluye los archivos fuente en tu proyecto y asegúrate de incluir el archivo de encabezado `ft_printf.h`.




