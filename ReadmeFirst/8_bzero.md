# BZERO 🧼
## Prototipo
``` void ft_bzero(void *d, size_t len) ```

### Filosofemos 🚬🌿
Piensa en bzero como una borradora mágica para la memoria. Imagina que tienes una pizarra
llena de garabatos y bzero es la mano mágica que borra todo y deja la pizarra completamente limpia.

**¿Qué hace bzero?**
bzero limpia un bloque de memoria, llenándolo todo con ceros.

### Cómo funciona:
Inicio: Tienes un pedazo de memoria, imagina una fila de casilleros con cualquier contenido.

**La Borradora**: bzero toma una cantidad específica de casilleros y los llena todos con 0.

**Borrar**: Va de casillero en casillero, llenándolos uno por uno con 0.

### Ejemplo:
**Memoria**: [ 1, 2, 3, 4, 5 ] (5 casilleros con valores distintos)

**Llamada a bzero**: bzero(memoria, 5)

**Proceso**:
>Llena el primer casillero con 0: [ 0, 2, 3, 4, 5 ]

>Llena el segundo casillero con 0: [ 0, 0, 3, 4, 5 ]

>Llena el tercer casillero con 0: [ 0, 0, 0, 4, 5 ]

>Llena el cuarto casillero con 0: [ 0, 0, 0, 0, 5 ]

>Llena el quinto casillero con 0: [ 0, 0, 0, 0, 0 ]

**Resultado**:
*Todos los casilleros están llenos con el valor 0.*

### PRUEBA UN MAIN
```
int main() {
	char	arr[10] = "HolaMundo";
	int		i = 0;
	
	bzero(arr, strlen(arr));

	while(i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	return  0;
}
```
