#include <stdio.h>
int main(){
    int r;
    int c; 
    int nrow;
    int ncols;
    char junk;
    r=1;
    while(r<=5){
        c=1;
        while(c<=5){
            printf("%3d", (r*c));
            c=c+1;
        }
        printf("\n");
        r=r+1;
    }
    printf("\n\n");
    printf("inserisci righe: ");
    scanf("%d", &nrow);
    junk=getchar();
    printf("inserisci colonne: ");
    scanf("%d", &ncols);
    junk=getchar();

    r=1;
    while(r<=nrow){
        c=1;
        while(c<=ncols){
            printf("3%d", (r*c));
            c=c+1;
        }
        printf("\n");
        r=r+1;
    }
    printf("\n\n");
    while(r<=5){
        c=1;
        while(c<=5){
            printf("(r:%d,c:%d)", r, c);
            c=c+1;
        }
        printf("\n");
        r=r+1;
    }



}