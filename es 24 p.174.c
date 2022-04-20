// dove indichi anche il numero di squadre presenti, alla fine bisgona stampare il nome il punteggio della squadra che ha vinto il campionato.
#include <stdlib.h>
#include <stdio.h>

int main(){
    char squadra[10], vinsquadra;
    int nsquadre = 0, pareggi = 0, vittorie = 0, sconfitte = 0, max;
        printf("Dimmi il numero di squadre \n");
        scanf("%d", &nsquadre);
    for (int i = 0; i < nsquadre; i++){
        printf("Dimmi il nome della squadra \n");
        scanf("%c", &squadra);
        while(vittorie <= 0 || pareggi <= 0 || sconfitte <= 0){
            printf("Dammi le vittorie, i pareggi e le sconfitte \n");
            scanf("%d%d%d", &vittorie, &pareggi, &sconfitte);
        }
        int punteggio = vittorie * 2 + pareggi - sconfitte;
        if (punteggio > max){
            max = punteggio;
            vinsquadra = squadra;
        }
        pareggi = 0; 
        vittorie = 0; 
        sconfitte = 0;
    }
    printf("La squadra che ha vinto il campionato è: %c", vinsquadra, " con ben: %d", max, " punti \n");
}