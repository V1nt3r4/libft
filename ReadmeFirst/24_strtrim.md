# STRTRIM 🪄✂️

## Prototipo:
``` char *ft_strtrim(char const *s1, char const *set); ```

## Filosofemos: 🚬🌿
Imagina que tienes una cuerda con muchos nudos al principio y al final, y deseas recortar esos nudos para que quede limpia y ordenada. 🧵✨

**¿Qué hace ft_strtrim?**:
Elimina todos los caracteres de la cadena s1 que pertenecen al conjunto set desde el inicio y el final de la cadena, hasta encontrar un carácter que no esté en set.

## Cómo funciona:

**Inicio**:
Tienes una cadena s1 que necesita un buen recorte.
También tienes un conjunto de caracteres set que quieres eliminar de los extremos de s1.

**Tijeras Mágicas**:
Identifica desde dónde empiezan y terminan los caracteres que no están en set dentro de s1.

## Proceso:
>Busca el primer carácter en s1 que no esté en set (inicio del nuevo recorte).

>Busca el último carácter en s1 que no esté en set (final del nuevo recorte).

>Reserva memoria para la nueva cadena que solo contiene los caracteres entre estos dos puntos.

### Ejemplo:
**s1**: "---συντέλεια---" set: "-"

**Resultado**:
*Nueva cadena: "συντέλεια"*

>[!TIP]
> PRUEBA UN MAIN

```
int main() {
	const char	s1[] = "---συντέλεια---";
	const char	set[] = "-";
	char	*result = ft_strtrim(s1, set);
	
	if(result) {
		printf("%s\n", result);
		free(result);
	}
	return 0;
}
```
