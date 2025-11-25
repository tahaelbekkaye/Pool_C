#include <stdio.h>

void calc(void){
    char op;
    float a, b, result;

    printf("Entrez une operation ( / * - + ) : ");
    scanf("%c", &op);

    printf("Entrez le premier nombre : ");
    scanf("%f",&a);

    printf("Entrez le deuxième nombre : ");
    scanf("%f",&b);
    if (op == "+"){
        result = a + b;
    } else if (op == "-")
    {
        result = a - b;
    }else if (op == "/")
    {
        result = a / b;
    }else if (op == "*"){
        result = a * b;
    }else{
        printf("Operation invalide");
        return;
    }
    printf("Resultat : %.2f\n", result);
}