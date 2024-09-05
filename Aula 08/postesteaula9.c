#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int total, contador,  x; 
    char letra; 
    contador = 0;
    total = 0; 
    
        do
        {
            printf("digite um número: \n");
            scanf("%d", &x);
            contador++;
            total =+ x;
            printf("Digite que q para sair ou qualquer tecla para continuar");
            scanf(" %c", &letra);
        } while (letra != 'q');

        printf("O valor do contador e: %d \n", contador); 
        printf("O valor do acumulador e: %d \n", total);

}