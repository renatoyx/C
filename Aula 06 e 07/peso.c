#include <stdio.h> 

int main () {

    float peso1, peso2, peso3, x;  

    printf("Digite o peso 1 \n");
    scanf("%f", &peso1);
    printf("Digite o peso 2\n ");
    scanf("%f", &peso2);
    printf("Digite o peso 3 \n ");
    scanf("%f", &peso3);

    x = peso1; 

    if (x < peso2) {
      x = peso2; 
    }

    if (x < peso3){ 
        x = peso3;
    }

    printf("oiii %f", x); 

}