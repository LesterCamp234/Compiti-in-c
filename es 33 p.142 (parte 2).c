#include <stdlib.h>
#include <stdio.h>

int main(){
    int hover = 0;
    float prezzo = 0;
    while(hover == 0 && prezzo == 0){
        printf("Dammi il prezzo e gli hoverboard \n");
        scanf("%f%d", &prezzo, &hover);
    }
    if (prezzo < 100){
        prezzo = prezzo * hover * 0.95;
    }   else if (prezzo < 200){
        prezzo = prezzo * hover * 0.90;
    } else {
        prezzo = prezzo * hover * 0.85;
    }
    printf("Devi pagare: %f", prezzo);
}