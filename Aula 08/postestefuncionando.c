#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int numero, x; 
    char resp; 
    
    do { 
         printf("Digite um número qualquer: \n"); 
        scanf("%d", &numero);   

        x =  numero *3;
    

        printf("%d \n", x); 

        printf("Deseja continuar? S/N \n"); 
        scanf(" %c", &resp); 
        } while (resp == 'S'); 
    }  