#include <stdlib.h>
#include <stdio.h>

int main(){
    int skateboard;
    float costo = 45;
    printf("Dammi il numero di skateboard \n");
    scanf("%d", &skateboard);
    if(skateboard == 2){
        costo = 90*0.70;
    }
    printf("Devi pagare: %f", costo);
}