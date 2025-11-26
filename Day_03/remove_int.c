#include <stdio.h>

void remove_int(int liste[], int size, int target){
    int j = 0;
    for(int i = 0; i < size; i++){
        if(liste[i]!=target){
            liste[j] = liste[i];
            j++;
        }
    }
    for(int i = j; i< size; i++){
        liste[i] = 0;
    }
}