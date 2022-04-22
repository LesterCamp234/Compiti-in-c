#include <stdlib.h>
#include <stdio.h>

int main(){
    int nvalori, n, max = 0, max1 = 0;
    do {
        printf("Dammi il numero di valori \n");
        scanf("%d", &nvalori);
    } 

    while (nvalori < 1);
    for (int i = 1; i <= nvalori; i++){
        do {
            printf("Dammi il numero \n");
            scanf("%d", &n);
        } while (n < 1);
        if (n > max){
            max = n;
        } else if (n > max1){
            max1 = n;
        }
    }
    printf("I valori più alti sono: %d %d \n", max, max1);
    
}
