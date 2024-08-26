#include <stdio.h>
#include <stdlib.h> 

    main () {

        char ch; 
        
        printf("MENU DE ESCOLHAS \n"); 
        printf("Opção 1 - Falar via whatsapp \n");
        printf("Opção 2 - Falar via chat online \n");
        printf("Opção 3 - Falar via telefone \n");
        printf("Escolha uma das opções, entre 1 e 3. \n ");
        
        ch = getchar();

        switch (ch)
        {
            case '1':
            printf("Para falar via whatsapp, basta clicar neste link. \n ");
                break;

            case '2': 
            printf("Para falar via chat online, basta aguardar alguns instantes que você será redirecionado. \n ");
                break; 

            case '3': 
            printf("Para falar por telefone, ligue em: 4002-8922 \n");
    	        break;

        
        default:
            printf("Como não foi escolhida nenhuma opção, estamos encerrando seu atendimento. \n ");
            break;
        }
        system ("pause"); 

    }