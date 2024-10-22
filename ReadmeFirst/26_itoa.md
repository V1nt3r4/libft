# ITOA 🔢
## Prototipo
``` char *ft_itoa(int n); ```
>[!NOTE]
>
> ## Filosofemos 🚬🌿
> Imaginemos que "ft_itoa" es un alfarero 🏺 que toma un trozo de barro (el número entero)
> y lo transforma en una vasija de cerámica (la cadena de caracteres). Primero, el alfarero
> como alfareros calculamos cuanta arcilla vamos a necesitar para crear la vasija, igual que
> contamos los dígitos del número. Luego, preparamos el entorno ⚙️, tal como usamos "malloc" 
> para asignar memoria.
>
> Mientras damos forma a la arcilla en el entorno, va de abajo a arriba, detallando la 
> base y subiendo poco a poco, igual que rellenamos la cadena desde el final hacia el 
> principio. Si la arcilla representa un número negativo, añadimos un toque especial,
> un pequeño detalle que indica que este objeto tiene una historia detrás, el signo '-'.
>
> Finalmente, igual que damos un último toque y dejamos que la vasija se seque 🌬️, nosotros 
> añadimos un carácter nulo al final de la cadena.
>
> La versión básica del alfarero trabaja con lo esencial, mientras que un maestro artesano
> podría asegurarse de que cada detalle esté pulido y perfecto, gestionando todos los casos
> especiales con destreza. 👌

## Cómo funciona
**Conteo de dígitos 📏**: Primero, necesitamos saber cuántos dígitos tiene el nímero.
Esto incluye manejar el signo negativo si el número es negativo.

**Asignación de memoria 💾**: Usamos "malloc" para asignar suficiente memoria para la cadena
que va a contener los dígitos del número más el signo y el carácter nulo al final.

**Conversión de dígitos 🔄**: Empezamos desde el final de la cadena y rellenamos cada 
posición con los dígitos del número. Estose hace dividiendo el número por 10 repetidamente
y tomando el resto en cada vez.

**Gestión del signo negativo ➖**: Si el número es negativo, convertimos el número a positivo
antes de llenar la cadena y añadimos el signo "-" al principio de la cadena.

**Carácter nulo ✅**: Finalmente, añadimos un carácter nulo "\0" al final de la cadena para
indicar el fin de la cadena.

**Resultado**: El final es una cadena de caracteres que presenta el número entero original.

>[!TIP]
> PRUEBA UN MAIN
>```
>int main() {
>	char	*str = ft_itoa('*');
>	printf("%s \n", str);
>	free(str);
>	
> return 0;
>}
>```
