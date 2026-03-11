/*
    Realizza un programma che richiede in input un valore N intero compreso tra 1 e 10.
    Calcolare quanti passaggi occorrono per superare il velore 1000 sapendo che,
    se il numero N è pari allora ad N sommo la sua metà, se N è dispari allora a N aggiungo 1.
*/
#include <stdio.h>
int main(){
    int n=0;
    int pari;
    int spari;
    int cnt;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<1 || n>10);

    if(n%2==0){
        pari=n/2;
        spari=n+pari;
        cnt = spari;
        for(cnt=spari; cnt <1000; cnt++){
            
        }


    }
}