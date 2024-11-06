# Proyecto de Bonificación - [Título del Proyecto]

![Imagen de Cabecera](ruta/a/tu/imagen.jpg)

## Descripción

Este proyecto es una bonificación para el trabajo [Título del Trabajo]. En él se implementan varias funciones y características que amplían la funcionalidad del trabajo original. El objetivo es demostrar habilidades de programación y ofrecer soluciones eficientes a problemas específicos.

## Makefile

El `Makefile` incluido en este proyecto proporciona una forma sencilla de compilar y ejecutar el código. A continuación se describen los comandos más importantes que puedes utilizar:

- `make all`: Compila todos los archivos necesarios para el proyecto.
- `make clean`: Elimina los archivos generados durante la compilación, asegurando un entorno limpio para futuras compilaciones.
- `make run`: Compila y ejecuta el programa principal.
- `make test`: Ejecuta las pruebas unitarias para verificar que el código funciona correctamente.

Para usar el `Makefile`, simplemente abre la terminal en el directorio del proyecto y ejecuta el comando deseado.

## Funciones y Clases

A continuación se presenta una lista de funciones y clases implementadas en el proyecto. Cada enlace te llevará a una explicación detallada de su funcionamiento, parámetros y valores de retorno.

- [Función 1: Descripción de la función 1](ruta/a/tu/documentacion_funcion1.md)
- [Función 2: Descripción de la función 2](ruta/a/tu/documentacion_funcion2.md)
- [Clase 1: Descripción de la clase 1](ruta/a/tu/documentacion_clase1.md)
- [Función 3: Descripción de la función 3](ruta/a/tu/documentacion_funcion3.md)

## Instalación

Para instalar y ejecutar este proyecto, clona el repositorio y navega al directorio del mismo:

```bash
git clone https://github.com/tu_usuario/tu_repositorio.git
cd tu_repositorio
```

Asegúrate de tener Python y `make` instalados en tu sistema.

## Uso

Una vez que el proyecto esté configurado, puedes utilizar los comandos del `Makefile` mencionados anteriormente para compilar y ejecutar el código. Asegúrate de revisar la documentación de cada función y clase para entender cómo utilizarlas correctamente.

```mermaid
flowchart TD
    A[Inicio] --> B[Definición de Funciones]
    B --> C[Parte Obligatoria]
    C --> D[Funciones de libc]
    D --> |Implementar| E[ft_isalpha()]
    D --> E2[ft_isdigit()] 
    D --> E3[ft_isalnum()] 
    D --> E4[ft_isascii()] 
    D --> E5[ft_isprint()] 
    D --> E6[ft_strlen()] 
    D --> E7[ft_memset()] 
    D --> E8[ft_bzero()] 
    D --> E9[ft_memcpy()] 
    D --> E10[ft_memmove()] 
    D --> E11[ft_strlcpy()] 
    D --> E12[ft_strlcat()] 
    D --> E13[ft_toupper()] 
    D --> E14[ft_tolower()] 
    D --> E15[ft_strchr()] 
    D --> E16[ft_strrchr()] 
    D --> E17[ft_strncmp()] 
    D --> E18[ft_memchr()] 
    D --> E19[ft_memcmp()] 
    D --> E20[ft_strnstr()] 
    D --> E21[ft_atoi()] 
    D --> F[Funciones que requieren malloc]
    F --> G[ft_calloc()] 
    F --> H[ft_strdup()] 
    C --> I[Parte Adicional]
    I --> J[Funciones adicionales]
    J --> K[ft_substr()] 
    J --> L[ft_strjoin()] 
    J --> M[ft_strtrim()] 
    J --> N[ft_split()] 
    J --> O[ft_itoa()] 
    J --> P[ft_strmapi()] 
    J --> Q[ft_striteri()] 
    J --> R[Funciones de salida]
    R --> S[ft_putchar_fd()] 
    R --> T[ft_putstr_fd()] 
    R --> U[ft_putendl_fd()] 
    R --> V[ft_putnbr_fd()] 
    C --> W[Parte Bonus]
    W --> X[Definición de la estructura de lista]
    X --> Y[Funciones de la lista]
    Y --> Z[ft_lstnew()] 
    Y --> AA[ft_lstadd_front()] 
    Y --> AB[ft_lstsize()] 
    Y --> AC[ft_lstlast()] 
    Y --> AD[ft_lstadd_back()] 
    Y --> AE[ft_lstdelone()] 
    Y --> AF[ft_lstclear()] 
    Y --> AG[ft_lstiter()] 
    Y --> AH[ft_lstmap()] 
    AG --> AI[Generación de la Librería]
    AI --> AJ[Compilación con Makefile]
    AJ --> AK[Pruebas]
    AK --> AL[Fin]
