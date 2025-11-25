/*Creare un programma C che richiede tre valori, determina se sono in ordine crescente 
e in caso affermativo se sono una terna pitagorica. (vedere cos'è una terna pitagorica in internet).*/

#include <stdio.h>
int main (void){
    int v1;
    int v2;
    int v3;
  
    printf("Inserisci il primo valore: ");
    scanf("%d", &v1);
 
    printf("Inserisci il secondo valore: ");
    scanf("%d", &v2);

    printf("Inserisci il terzo valore: ");
    scanf("%d", &v3);
    
    if(v1 < v2){
        if(v2 < v3){
            printf(" sono in ordine crescente...\n");
        }
        else{
            printf(" NON sono in ordine crescente...\n");
        }
    }
    
    if((v1 < v2) && (v2 < v3)){
        printf(" sono in ordine crescente...\n");
    }
    else{
        printf(" NON sono in ordine crescente...\n");
    }
    return(0);
}
