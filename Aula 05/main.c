#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media; 

    printf("Digite sua primeira nota: "); 
    scanf("%f", &nota1); 

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/3 ;

    if (media>=6){ 
        printf("Você está aprovado! \n Sua média no trimestre foi: %f", media );
    }
    else { 
        printf("Você está reprovado. \n Sua média no trimestre foi de: %f", media);
    }

    return 0;

}