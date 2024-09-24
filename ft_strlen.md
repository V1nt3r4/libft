**PROTOTIPO DE LA FUNCIÓN**

``` size_t ft_strlen(const char *str); ```

**DESCRIPCIÓN** 

*La función ft_strlen calcula la longitud de una cadena de caracteres terminada en nulo '\0'. Devuelve el número de caracteres presentes en la cadena, excluyendo el carácter lnulo que marca el final de la cadena.*

**PARÁMETRO**

 -str: *Un puntero a la cadena de caracteres (de tipo const char *). La cadena de debe estár terminada en un con un carácter nulo '\0'.*

 **VALOR DE RETORNO**

  - *Devuelve el número de caracteres en la cadena, excluyendo los caracteres nulos. El tipo de retorno en size_t, que es un tipo de retorno diseñado para almacenar tamños de objetos y que evit problemas con cadenas largas.*

  **FUNCIONAMIENTO BASICO**

  *La función recorre la cadena carácter por carácter hasta que encuentra el carácter nulo, que indica el final de la cadena. A medida que recorre la cadena, cuenta la cantidad de caracteres.*

  **EJEMPLO DE USO**

  ```
  #include <stdio.h>

  size-t ft_strlen(const char *str);

  int main(void)
  {
    const char *texto = "Hola, mundo!";
        printf("La longitud de la cadena es: %zu\n", ft_strlen(texto));
        return 0;
  } 