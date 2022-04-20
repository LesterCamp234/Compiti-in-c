#include <stdlib.h>
#include <stdio.h>

int main(){
    int amici = 0, pizza = 0;
    float prezzo;
    while (amici <= 0){
        printf("Dammi il numero d'amici \n");
        scanf("%d", &amici);
    }
   for (int i = 0; i < amici; i++) {
        while (pizza <= 0){
            printf("Dimmi che tipo di pizza ti prendi? \n"); //1 = marghe(5) 2 = prosciuto(6.5) 3 = capricciosa(7) o 7.8
            scanf("%d", &pizza);
        }
        switch (pizza) {
        case 1:
            prezzo = prezzo + 5;
            break;
        
        case 2:
            prezzo = prezzo + 6.5;
            break;
        
        case 3:
            prezzo = prezzo + 7;
            break;

        default:
            prezzo = prezzo + 7.8;
            break;
        }
        pizza = 0;
    }
    prezzo = prezzo / amici;
    printf("Devi pagare: %f", prezzo);
}  