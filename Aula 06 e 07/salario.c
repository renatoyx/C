#include <stdio.h>

int main(){ 

    float sal, ns; 

    printf("Digite o valor do salario: \n");
    scanf("%f", &sal);

    if (sal < 500){ 
        ns = sal * 1.5; 
    }
    else if (sal <= 1000) {
            ns = sal * 1.1;
        } 
    else {
            ns = sal * 1.05;
         }
            printf("Seu novo salario e de %f", ns);

    }

