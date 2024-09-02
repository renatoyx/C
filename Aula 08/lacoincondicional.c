#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    int numero, contador, r; 
    
    for ( contador = 1; contador <= 5 ; contador++)
    {
        printf("Digite um numero inteiro");
        scanf("%d", &numero);

        r = numero * 3;         
        printf("%d", r); 

    }
    
}