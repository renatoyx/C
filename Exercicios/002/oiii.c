#include <stdio.h>

int main() { 

    int x; // declaration (criar a variavel )
    x = 123; // inicalization ( dar valor a variavel)
    int y = 123; // declaration + inicialization (já faz os dois juntos )

    int age = 21; //inteiro 
    float peso = 20.48; // numero fluituante
    char grade = 'C';  // apenas 1 caractere 
    char name[] = "Joao"; // array de carateres

    printf("You are my best friend %s\n", name);
    printf("%s is my best fried, and he is %d years old", name, age);

    return 0;  
}