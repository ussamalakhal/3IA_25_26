/*richiedi un numero intero da tastiera positivo, se il numero e inferiore ...*/

#include <stdio.h>
int main (void){
    int val;
    int tmp;
    char junk;


    printf("inserisci il valore: ");
    scanf("%d", &val);
    junk = getchar();


    if(val < 25){
        tmp = val;
        while(tmp <= 50){
            printf("%d", tmp);
            tmp = tmp + 1;
        }
        tmp=val;
        while(tmp<=50){
            if(tmp%2 == 0){
                printf("%d", tmp);
            
            }
            tmp=tmp+1;
        }

        




    }else{
        printf("serie non realizzabile.....");
    }
    return 0; 
}