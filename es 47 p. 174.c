#include <stdio.h>
#include <stdlib.h>

int main(){
    int persone;
    float costo;
    printf("Dammi il numero delle persone");
    scanf("%d", &persone);
    costo = 76 * persone;
    printf("Devi pagare: %f", costo);
}