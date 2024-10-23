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
