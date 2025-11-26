#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == n)
            return i;          // found exact match
        if(arr[i] > n)
            return i;          // insertion position
    }
    return size;               // insert at end
}