# SPLIT 🛠️🔍
## Prototipo
``` char	**ft_split(const char *s, char c) ```

## Filosofemos 🚬🌿
Piensa en ft_split como un panadero cortando una baguette en rebanadas. La cadena es la baguette y el delimitador es el cuchillo. A cada corte (donde encuentras el delimitador), obtienes una rebanada (una subcadena).
Luego, juntas todas las rebanadas en una bandeja (un array) que termina con un espacio vacío para saber cuándo dejar de comer.

## Cómo funciona
**Contar las frutas**: El chef cuenta cuántas frutas hay en la ensalada (cuántas palabras hay en la cadena).

**Preparar los recipientes**: El chef prepara un bol para cada fruta, más uno vacío al final (crea el array de subcadenas).

**Cortar y servir**: El chef corta cada fruta en el bol adecuado (separa cada subcadena y las guarda en el array).

**Finalizar**: Cuando todas las frutas están cortadas, el chef pone un bol vacío al final para indicar que la ensalada está lista (termina con un puntero NULL).

## Proceso
> Se pide al usuario que ingrese una cadena.

> Se pide al usuario que ingrese un delimitador.

> "ft_split" se encarga de dividir la cadena basándose en el delimitador.

> Se almacenan las subcadenas en un array.

> Se imprimen las subcadenas resultantes.

>[!WARNING]
> LIBERA MEMORIA, EVITA DESBORDAMIENTOS.


**Split en lo personal se me hizo complicado de entender, por lo que vamos a analizar más en profundidad el proceso de la función**

>[!NOTE]
> ## PROCESO DETALLADO
>
> ### - Función principal: "ft_split"
> - "ft_split" recibe la cadena "s" y el delimitador "c".
>   - *se asegura que la cadena no sea nula*
> - Utiliza "word_count" para contar cuantas subcadenas se generan.
> - Reserva memoria para el array de las subcadenas.
> - Llama a split_words para llenar el array con las subcadenas correspondientes.
>
> ### - Funciones secundarias: "word_count", "free_memory", "word_len", "split_words"
>  **Contar palabras** "word_count"
>   - Recorre la cadena *s* y cuenta las palabras delimitadas por *c*.
>   - Incrementa el contador cuando encuentra una palabra y la salta hasta el siguiente delimitador o el final de la cadena.
>     
>  **Liberar memoria** "free_memory"
>   -  libera la memoria asignada para cada subcadena y el array de punteros en caso de error durante la asignación.
>     
>  **Longitud de las palabras** "word_len"
>   - Calcula la longitud de una palabra desde el índice "i" hasta el delimitador "c"o el final de la cadena.
>     
>  **Separar palabras** "split_words"
>   - Recorre la cadena "s" y separa las palabras utilizando el delimitador "c".
>   - Para cada palabra encontrada, reserva memoria, la copia en el array str y continúa hasta el final de la cadena.
>     
> ### ESTAS FUNCIONES TRABAJAN JUNTAS PARA:
>   - *Identificar y calcular la longitud de cada palabra*: "word_len" determina el final de cada palabra, empezando desde un índice dado.
>   - *Reservar memoria para cada palabra*: Dentro de "split_words", se reserva memoria para cada subcadena identificada.
>   - *Manejo de memoria*: Si hay algún error en la reserva de memoria, "free_memory"libera la memoria.

> [!TIP]
>  PRUEBA UN MAIN
>  ```
>  int main() {
>   char	**result;
>	  char	str[] = "No hay nada sin su opuesto";
>	  int		i = 0;
>
>	result = ft_split(str, ' ');
>	
>	while(result[i] != NULL){
>		printf("%s\n", result[i]);
>		free(result[i]);
>		i++;
>	}
>	free(result);
>	return 0;
> }
