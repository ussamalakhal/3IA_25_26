#include <stdio.h>
#include "mialib.c"

int main(){
    int num=20;

    printf("prossimo primo: %d: %d\n", num, nextPrimo(num));
    printf("primo precedente: %d: %d\n", num, prevPrimo(num));
}