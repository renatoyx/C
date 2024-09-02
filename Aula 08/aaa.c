#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int numero, x; 
    char resp;
    
    printf("Digite um número qualquer: \n"); 
        scanf("%d", &numero); 

        x =  numero *3;
    do
    {
        printf("%d \n", x); 

        printf("Deseja continuar? S/N \n");
        resp = getchar(); 

        } while ( resp = 'S');  
    
}