#include <stdio.h> 

int main (){ 

    int idade; 

    printf("Digite sua idade: "); 
    scanf("%d", &idade);

    if (idade >= 18)
    {
       printf("Voce maior de idade, e pode votar \n"); 
    }
    else if (idade > 16  ) // esle if = se não, mas se... 
    { 
        printf("Voce e menor de idade, mas pode votar.");
    }
    else { 
        printf("Voce e menor de idade e nao pode votar \n " );
    }
    
}