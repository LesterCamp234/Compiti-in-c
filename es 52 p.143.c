#include <stdlib.h>
#include <stdio.h>

int main(){
    int scatti;
    float costo;
    printf("Dammi il numero degli scatti \n");
    scanf("%d", &scatti);
    if (scatti < 31){
        costo = scatti * 0.20 + 2.5;
    } else if (scatti < 101)
    {
        costo = (scatti - 30) * 0.15 + 8.50;
    } else {
        costo = (scatti - 100) * 0.10 + 18.50;
    }
    printf("Devi pagare: %f", costo);
}