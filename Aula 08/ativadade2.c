#include <stdio.h>

int main(){ 
    int nota, contador, total; 
    char letra;
    nota = 0 ;
    contador = 0;
    total = 0; 
    
    do
    {
        printf("Digite a nota\n");
        scanf("%d", &nota); 
        contador++; 

        total =total + nota;

        printf("Deseja continuar? Se sim digite qualquer tecla, se não digite 'q'. \n");
        scanf(" %c", &letra); 

    } while (letra != 'q');
    total = total / contador; 
    printf("Sua média foi de: %d", total);
    
}