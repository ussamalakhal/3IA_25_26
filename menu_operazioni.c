#include <stdio.h>
#include <stdlib.h>

/* FUNZIONE A: inputNumberRange */
int inputNumberRange(int int_min, int int_max) {
    int valore;
    int min_range, max_range;
    
    // Se min == max, ritorna -1
    if (int_min == int_max) {
        return -1;
    }
    
    // Se min > max, range è tra 0 e min
    if (int_min > int_max) {
        min_range = 0;
        max_range = int_min;
    } else {
        // Se min < max, range è tra min e max
        min_range = int_min;
        max_range = int_max;
    }
    
    // Richiedi inserimento finché il valore non è nel range
    do {
        printf("Inserisci un valore tra %d e %d (compresi): ", min_range, max_range);
        scanf("%d", &valore);
        
        if (valore < min_range || valore > max_range) {
            printf("Errore! Il valore deve essere tra %d e %d.\n", min_range, max_range);
        }
    } while (valore < min_range || valore > max_range);
    
    return valore;
}

/* FUNZIONE B: moltiplicaConSomme */
int moltiplicaConSomme(int int_n1, int int_n2) {
    int risultato = 0;
    int i;
    
    // Se uno dei due è negativo, gestisci il segno
    int n1 = (int_n1 < 0) ? -int_n1 : int_n1;
    int n2 = (int_n2 < 0) ? -int_n2 : int_n2;
    int segno = 1;
    
    if ((int_n1 < 0 && int_n2 > 0) || (int_n1 > 0 && int_n2 < 0)) {
        segno = -1;
    }
    
    // Moltiplica n1 * n2 con somme successive
    for (i = 0; i < n2; i++) {
        risultato += n1;
    }
    
    return risultato * segno;
}

/* FUNZIONE C: numeroDivisori */
int numeroDivisori(int int_n) {
    int divisori_pari = 0;
    int divisori_dispari = 0;
    int i;
    int n = (int_n < 0) ? -int_n : int_n;
    
    if (n == 0) {
        printf("Zero non ha divisori definiti.\n");
        return 0;
    }
    
    // Trova tutti i divisori
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                divisori_pari++;
            } else {
                divisori_dispari++;
            }
        }
    }
    
    printf("Numero: %d\n", int_n);
    printf("Divisori pari: %d\n", divisori_pari);
    printf("Divisori dispari: %d\n", divisori_dispari);
    printf("Totale divisori: %d\n", divisori_pari + divisori_dispari);
    
    return divisori_pari + divisori_dispari;
}

/* FUNZIONE D: TotaleNumero */
int TotaleNumero(int int_n) {
    int somma = 0;
    int n = (int_n < 0) ? -int_n : int_n;
    
    // Somma le cifre del numero
    while (n > 0) {
        somma += n % 10;
        n /= 10;
    }
    
    return somma;
}

/* MENU PRINCIPALE */
int main() {
    int scelta;
    int n1, n2, n, risultato;
    
    do {
        printf("\n========== MENU PRINCIPALE ==========\n");
        printf("a) inputNumberRange - Inserisci numero in range\n");
        printf("b) moltiplicaConSomme - Moltiplica con somme successive\n");
        printf("c) numeroDivisori - Conta divisori pari e dispari\n");
        printf("d) TotaleNumero - Somma delle cifre\n");
        printf("e) Esci dal programma\n");
        printf("====================================\n");
        printf("Seleziona un'operazione (a/b/c/d/e): ");
        scanf(" %c", (char*)&scelta);
        
        switch (scelta) {
            case 'a':
            case 'A':
                printf("\n--- Operazione A: inputNumberRange ---\n");
                printf("Inserisci valore minimo: ");
                scanf("%d", &n1);
                printf("Inserisci valore massimo: ");
                scanf("%d", &n2);
                
                risultato = inputNumberRange(n1, n2);
                
                if (risultato == -1) {
                    printf("Min e Max sono uguali. Valore restituito: -1\n");
                } else {
                    printf("Valore inserito: %d\n", risultato);
                }
                break;
                
            case 'b':
            case 'B':
                printf("\n--- Operazione B: moltiplicaConSomme ---\n");
                printf("Inserisci primo numero: ");
                scanf("%d", &n1);
                printf("Inserisci secondo numero: ");
                scanf("%d", &n2);
                
                risultato = moltiplicaConSomme(n1, n2);
                printf("Risultato di %d * %d = %d\n", n1, n2, risultato);
                break;
                
            case 'c':
            case 'C':
                printf("\n--- Operazione C: numeroDivisori ---\n");
                printf("Inserisci un numero intero: ");
                scanf("%d", &n);
                
                numeroDivisori(n);
                break;
                
            case 'd':
            case 'D':
                printf("\n--- Operazione D: TotaleNumero ---\n");
                printf("Inserisci un numero intero (1-100): ");
                scanf("%d", &n);
                
                if (n < 1 || n > 100) {
                    printf("Errore! Inserisci un numero tra 1 e 100.\n");
                } else {
                    risultato = TotaleNumero(n);
                    printf("Somma delle cifre di %d = %d\n", n, risultato);
                }
                break;
                
            case 'e':
            case 'E':
                printf("Programma terminato. Arrivederci!\n");
                break;
                
            default:
                printf("Scelta non valida! Riprova.\n");
        }
        
    } while (scelta != 'e' && scelta != 'E');
    
    return 0;
}
