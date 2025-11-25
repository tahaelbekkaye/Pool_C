#include <stdio.h>

int factoriel(int nbr){
    if(nbr<=1){
        return 1;
    }
    return nbr * factoriel(nbr - 1);
}

int main(void) {
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factoriel non défini pour les nombres négatifs.\n");
    } else {
        printf("%d! = %d\n", n, factorial(n));
    }

    return 0;
}