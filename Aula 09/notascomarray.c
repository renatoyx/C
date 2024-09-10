#include <stdio.h>

int main (){ 

    int I; 
    float MD [8], SOMA, MEDIA;  
    for ( I = 0; I < 8 ; I++)
    {
        printf("Digite sua nota: \n");
        scanf("%f", &MD[I]); 

        SOMA = SOMA + MD[I];
    }

        for ( I = 0; I < 8 ; I++)
    {
        printf("%.2f \n", MD[I]); 
    }

    MEDIA = SOMA / 8; 
    printf("%.2f", MEDIA);
    
}