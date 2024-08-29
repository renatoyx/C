#include <stdio.h> 

int main () { 

    int numero; 


    printf("Escolha um número. "); 
    scanf("%d", &numero); 

    if (numero == 1) { 
        printf("Você esolheu o número 1 ");
    }

    if (numero == 2) { 
        printf("Você escolheu o número 2 ");
    }

    if (numero > 2) {   
        printf("Você escolheu um valor muito alto");
    }

    if (numero < 1 ) { 
        printf("Você escolheu um valor muito alto");
    }

    return 0; 
}