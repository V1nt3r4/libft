 
 **PROTOTIPO DE FUNCIÓN**
 
    - int ft_isdigit(int c)
    
 **DESCRIPCIÓN**
 
    La función ft_isdigit toma un entero que representa el valor de ASCII de un 
    carácter es un dígito decimal (es decir, un número entre '1' y '9'). Si es un 
    dígito devuelve 1; en caso contrario, devuelve 0.
    
 **PARÁMETRO**
  
    c: El valor ASCII del carácter que se evaluará. Aunque se recibe como entero,
    este valor debería corresponder a un carácter ASCII.
    
 **VALOR DE ENTORNO**
 
    Retorna 1 si el valor de c corresponde a un dígito('0' a '9').
    Retorna 0 en cualquier otro caso.
    
 **USO COMÚN**
 
    Esta función es útil cuando se necesita validar si un carácter es un dígito,
    por ejemplo, al leer o procesar entradas numéricas en cadenas de texto.
    
 **EJEMPLO DE USO**:
  ```
   #include <stdio.h>
   int ft_isdigit(int c)
   {
        char ch = 5;
         if(ft_isdigit(ch))
            printf("%c es un número", ch);
        else 
            printf("%c no es un número", ch);

  return 0;
   } ´´´ 
