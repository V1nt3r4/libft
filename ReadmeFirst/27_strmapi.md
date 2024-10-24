# STRMAPI 🎛️🔠
## Prototipo
``` char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); ```

>[!NOTE]
> ## Filosofemos  🚬🌿
> Piensa en strmapi como un lugar donde cada letra tiene una pequeña transformación personalizada. Cada vez que pasa por el alfarero (**f**), puede salir con una forma diferente. Quizá cambias una letra por otra, o le añades algo especial. El índice es importante porque te dice qué letra estás modificando y te puede ayudar a decidir cómo lo haces.
>
>Por ejemplo, podrías tener una función (**f**) que transforme las vocales en mayúsculas solo si están en posición par, o que convierrta cada letra en su siguiente en el alfabeto.

## Procceso
**Llamada a los dioses del espacio (malloc)** 💾:
Necesitamoss espacio donde poner la nueva cuerda modificada. Si no hay espacio, mala suerte, no hay magia. (NULL?)

**Iteración(la cuerda en el torno del alfarero) 🎡**:
Luego, te pones a trabajar en cada letra de la cuerda, empezando por la primera. Cada letra va a pasar por la función "f", que es el alfarero que dará forma a cada carácter en base a su posición.

**Guardar el resultado ✏️**:
La función "f" devuelve una nueva letra modificada, y esta la vas guardando en la nueva cuerda que pediste con malloc. Así, después de recorrer toda la cuerda, tienes una versión "retocada" y lista para usarse.

**Carácter nulo al final ⛔**
No te olvides del nulo.

>[!TIP]
> PRUEBA UN MAIN
> ``` 
> char funcion_prueba(unsigned int i, char c)
>{
>	return c + 1;
>}
>
>int main() {
>	char	*str = "Hola Mundo";
>	char	*result = ft_strmapi(str, funcion_prueba);
>
>	if(result)
>		printf("Cadena original: %s\n", str);
>		printf("Cadena modificada: %s\n", result);
>
>	return 0;
>}
>```
