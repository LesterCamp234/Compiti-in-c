#include <stdlib.h>
#include <stdio.h>

int main(){
    int spesa, totale, nspesa;
    float media;
    do
    {
        printf("Dammi il numero di spesa \n");
        scanf("%d", &nspesa);
    } while (nspesa < 1);
    for (int i = 1; i <= nspesa; i++)
    {
        do
        {
            printf("Dammi la spesa \n");
            scanf("%d", &spesa);
        } while (spesa < 1);
        totale = spesa + totale;
    }
    media = totale/nspesa;
    printf("La media è : %f  mentre il totale è: %d \n", media, totale);
}