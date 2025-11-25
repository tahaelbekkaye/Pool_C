#include <stdio.h>

int sqrt(int nbr){
    int i = 0;
    if(nbr < 0)
        return -1;
    while (i * i <=nbr)
    {
        i++;
    }

    return i - 1;
}

int main(void) {
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    int res = sqrt_x(n);

    if (res == -1)
        printf("Racine carrée non définie pour les négatifs.\n");
    else
        printf("Racine carrée entière de %d = %d\n", n, res);

    return 0;
}