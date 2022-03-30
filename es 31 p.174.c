#include <stdlib.h>
#include <stdio.h>

int main(){
    int naquirente, costo = 234;
    printf("Dammi il numero dell'aquirente \n");
    scanf("%d", &naquirente);
    if (naquirente < 101){
        costo = 180;
    } else if (naquirente < 201){
        costo = 180 * 1.1;
    }
    printf("Devi pagare: %d", costo);

}