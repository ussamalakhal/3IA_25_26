#include <stdio.h>
int main(void){
	
	int giorno = 0;
	int mese = 0;
	int anno = 0;
	int bisestile = 0;
	
	
	printf("Inserisci giorno: ");
	scanf("%d", &giorno);
	printf("Inserisci mese: ");
	scanf("%d", &mese);
	printf("Inserisci anno: ");
	scanf("%d", &anno);
	

    if(giorno>=1 && giorno<=30){ 
		printf("giorno non valido");
    }
	
	
	if(anno%100 == 0){
		if(anno%400 == 0){
			bisestile=1;
		}
        printf("lanno è besistile\n");
	}
	else{
		if(anno%4 == 0){
			bisestile = 1;
		}
        printf("non è besistile\n");

    }

}
	
	