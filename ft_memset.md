**PROTOTIPO DE LA FUNCIÓN**

``` void *ft_memset(void *b, int c, size_t len); ```

**DESCRIPCIÓN**

*La función ft_memset llena los primeros len bytes del área de memoria apuntada por b con el valor constante c. El valor de c se pasa como entero, pero se convierte en en un carácter sin signo antes de ser escrito en cada byte de la memoria.*

**PARÁMETROS**

 - b: *Un puntero al área de memoria que se llenará con el valor especificado*

 - c: *El valor que se utiliza para llenar la memoria. Solo el byte menos significativo de 'c' se utiliza (se convierte en unsigned char).*

 - len: *El número de bytes que se llenará con el valor 'c'.*

 **VALOR DE RETORNO**

 - *Retorna un puntero al área de memoria b que ha sido llenada con el valor especificado.*

 **FUNCIONAMIENTO BÁSICO**

 *ft_memset es utilizada frecuentemente para inicializar bloques de memoria, como en la inicialización de buffers a cero o llenarlos con un valor específico antes de ser utilizados*

 **EJEMPLOS DE USO**

 ```
 #include <stdio.h>
 #include <string.h>

 void *ft_memset(void *b, int c, size_t len);

 int main(void)
 {
    char str[50] = "Hola, mundo!";
    printf("Antes de memset: %s\n", str);

    ft_memset(str + 5, '.', 3);
    printf("Después de memset: %s\n", str);

    return 0;
 } 
 ```

 **ERRORES COMUNES**

  - *Exeder los límites de memoria al especificar el valor de len.*

  - *Usar un valor incorrecto para c que no sea un byte válido (0-255).*

  - *Confundir ft_memset con ft_bzero para incializar la memoria a 0*

  - *No hacer la conversión adecuada de punteros al tipo unsigned char *.*

  - *Usar ft_memset para inicializar estructuras o tipos complejos*

  - *Pensar que ft_memset protege contra el acceso a memoria no válida.*