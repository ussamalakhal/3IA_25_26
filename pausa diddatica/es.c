/*
    Esercitazione 1 della pausa didattica.
    Data: 2026.02.24

    PER COMPILARE:
    gcc nomefile.c [invio] -> se tutto ok crea un file a.out (a.exe su windows)

    PER ESEGUIRE
    ./a.out (./a.exe sotto windows)
*/
#include <stdio.h>
int main() {
    int a;      // variabile iniziale per fare alcune prove.
    char junk;  // cattura il carattere [invio] premuto dpo il valore di input

    // assegnazione manuale di un valore da tastiera ad una variabile 'a', relativa stampa con printf.
    a = 5;
    printf("%d\n", a);

    // assegnazione con input da tastiera di un valore alla variabile 'a'
    printf("Inserisci un valore per A: ");
    scanf("%d", &a);    // &variabile -> indica l'indirizzo in memoria dove è collocata la variabile.
    junk = getchar();

    printf("%d\n", a);

    a = a * 2;
    a *= 2;

    a = a + 6;

    a = a + 1;
    a += 1;
    a++;
    printf("%d\n", a);

    // eseguire dei test sulla variabile.
    if(a >= 20) {       // selezione unaria
        printf("A è maggiore o uguale a 20.\n");
    }

    if(a >= 20) {       // selezione binaria
         printf("A è maggiore o uguale a 20.\n");
    }
    else {
         printf("A è inferiore a 20.\n");
    }
    /*
        forma errata, la trasformo girando il segno di confronto ed eliminando il ramo else
        if(a < 20) {
            printf("A è minore di 20.\n");
        }
    */

    // selezioni con operatore logico 'e'
    // il numero è multiplo di 2 e multiplo di 5
    if(a%2 == 0) {
        if(a%5 == 0) {
            printf("Il valore di A è multiplo di 2 e di 5.");
        }
    }

    return 0;
}