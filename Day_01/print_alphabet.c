#include <stdio.h>

void print_alphabet(void) {
    for (char c = 'a'; c <= 'z'; c++) {
        putchar(c);  // Affiche chaque lettre
    }
    putchar('\n');  // Ajoute un saut de ligne à la fin
}