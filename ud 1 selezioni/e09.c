/*programma che visualizza da 1 a n inserito da tastiera
 e per ogni numero visualizza i soui divisori */

#include <stdio.h>
int main (void){
    int n = 0 ;
    int acm = 0;
    int count = 0;
    int count1 = 0;
    printf ("fornire il valore iniziale \n");
    scanf ("%d", &n);
    count = n;
    do {
        printf ("il valore sottratto e %d \n", count);
        count = count - 1 ;
        count1 = n;
        while (count1 > 0 && count > 0) {
            count1 = count1 - 1;
            if (n % count1 == 0) {
                printf ("il divisore di %d e %d \n",n,count1);
            }
        }
    } while ( count > 0 );
}