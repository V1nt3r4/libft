# STRJOIN 🧵✨

## Prototipo:

``` char *ft_strjoin(char const *s1, char const *s2); ```

## Filosofemos 🚬🌿
Piensa en ft_strjoin como un mágico pegamento que une dos cadenas, dándote una nueva cuerda más larga. 🪢

**¿Qué hace ft_strjoin?:**
Reserva memoria para una nueva cadena que contiene a s1 seguida de s2.
Si falla la reserva de memoria, devuelve NULL.

## Cómo funciona:

**Inicio**: Tienes dos cadenas: s1 y s2.

**Pegamento Mágico**: Se calcula la longitud total de la nueva cadena.
Se reserva espacio suficiente para s1, s2 y el carácter nulo de terminación (\0).

## Proceso:
>Copia el contenido de s1 en la nueva cadena.
>Añade el contenido de s2 justo después de s1.
>Añade el carácter nulo \0 al final de la nueva cadena.

### Ejemplo:
**s1**: "Hola, " **s2**: "Mundo!"

**Resultado**:
*Nueva cadena: "Hola, Mundo!"*

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
	char	s1[] = "Finis ";
	char	s2[] = "Mundi";
	char	*result = ft_strjoin(s1, s2);
	
	if(result)
		printf("%s\n", result);
	
	return 0;
}
```
