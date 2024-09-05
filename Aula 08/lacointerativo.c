#include <stdio.h> 

int main()
{
    int numero, x, contador; 

    contador = 1; 

    while (contador <= 5)
    {
        printf("Digite um número qualquer: \n"); 
        scanf("%d", &numero); 

        x =  numero *3;

        printf("%d \n", x); 

        contador++; //contador = contador + 1; (mesma coisa)
    }
    

}
