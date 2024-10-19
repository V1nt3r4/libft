# CALLOC 🧽📦0️⃣
## Prototipo
``` void	*ft_calloc(size_t nmemb, size_t size) ```

## Filosofemos 🚬🌿
Imagina que calloc es un camarero en un bar que prepara bandejas limpias y listas para usarse, con la cantidad exacta de vasos que necesitas, todos perfectamente limpios y en su lugar.

**¿Qué hace calloc?**
calloc asigna memoria para una cantidad específica de elementos, y lo hace de forma segura, inicializando toda esa memoria a ceros.

## Cómo funciona:
**Inicio**: Quieres una bandeja con una cantidad específica de vasos limpios.

**El Camarero**: calloc toma nota de cuántos vasos necesitas y el tamaño de cada vaso.

### Preparar la Bandeja:

- Asigna la memoria suficiente para todos los vasos.

- Inicializa cada vaso a cero, asegurándose de que esté limpio y listo para usarse.

**Resultado**: Devuelve un puntero a la bandeja de memoria, donde cada vaso (bloque de memoria) está inicializado a cero.

### Ejemplo:
**Vasos**: 5

**Tamaño de cada vaso**: 4 bytes (como un entero)

**Llamada a calloc**: calloc(5, sizeof(int))

## Proceso:
>El camarero asigna suficiente memoria para 5 vasos de 4 bytes cada uno.

>Inicializa cada uno de los 5 vasos a cero: [0, 0, 0, 0, 0].

>Devuelve un puntero a la bandeja con los vasos listos para usarse.

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
	int		*arr = (int *)calloc(5, sizeof(int));
	int		i = 0;
	
	while(i < 5){
		printf("%d\n", arr[i]);
		i++;
	}
}
```
