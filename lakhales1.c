/*Realizzare un programma C che richiede un numero N da tastiera, se N è compreso tra 5 e 15 (estremi
compresi) allora procede nel seguente modo: Genera random N numeri casuali da 1 a 25, se il numero generato
è pari allora sulla stessa riga visualizza i suoi divisori; se il numero generato è dispari allora sulla stessa riga
genera altrettanti numeri casuali compresi tra 1 e 10 calcolando e visualizzando la loro somma.
Se N non rispetta la condizione iniziale, viene verificato se si tratta di un numero primo oppure no con relativo
messaggio “Numero Primo” o “Numero Non Primo” stampato a video.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n;
    int random;
    int numero;
    int div;
    int cnt;
    srand(time(NULL));

    
    for(cnt = 1; cnt <= n; cnt++){
        random = 1 + rand()25%;
         if(random%2 == 0){
            printf("%d pari: ", random);
            div = 1;
            while(div <= random){
                 if(random%div == 0){
                    printf("%d\t ", div);
                }
                div++;
            }
        }
    }
    
    if(numero%3==0){
        while(numero < 1 || numero > 10){
            random = 1 + rand()%10;
        }
    }

}