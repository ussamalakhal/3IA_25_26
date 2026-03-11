// sezione delle INCLUDE -> librerie
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// sezione PROTOTIPI -> DICHIARAZIONE DELLE FUNZIONI.

/**
 * Check whether a number is prime or not.
 * @param int Number to test.
 * @return boolean true/false.
 */
bool isPrimo(int _n);
/**
 * Verifica se un numero è perfetto oppure no
 * @param int Numero da verificare
 * @return boolean true/false
 */
bool perfecto(int n1);
/**
 * Verifica terna pitagorica, se n1^2+n2^2 = n3^2
 * @param int _n1 Primo valore
 * @param int _n2 Secondo valore
 * @param int _n3 Terzo valore
 * @return boolean true/false
 */
bool terna(int n1,int n2,int n3);

// sezione MAIN PROGRAM
int main(){
    int valore;
    int junk;
    for(valore=1; valore <= 7; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    for(valore=7; valore <= 15; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    for(valore=15; valore <= 25; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    return(0);
}

// SEZIONE DELLE FUNZIONI -> DEFINIZIONE DELLE FUNZIONI
bool isPrimo(int _n){
    int div;    // variabile per i divisori del numero passato come parametro.
    int cnt;    // contatore per i divisori trovati del numero passato come parametro.

    cnt = 0;
    for(div=1; div<=_n; div++){
        if(_n%div == 0) // ho trovato un divisore! -> incremento il contatore
            cnt++;
    }

    if(cnt<=2)
        return(true);
    else
        return(false);
}
bool perfecto(int n1){
    int cnt;
    cnt=0;
    for (int div = 1; div <= n1; div++) {
        if (n1 % div == 0){
            cnt += div;
        }
    }
    if(cnt == (n1*2)) {
        return true;
    }else{
        return false;
    }
}
bool terna(int n1,int n2,int n3) {
    int mul1 = n1 * n1;
    int mul2 = n2 * n2;
    int mul3 = n3 * n3;
    int som = mul1 + mul2;
    if (som == mul3){
        return true;
    }else {
        return false;
    }
}
