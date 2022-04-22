#include <stdlib.h>
#include <stdio.h>

int main(){
    int poligoni = 0, lato = 0, nlati = 0, perimetro = 0;
    while (poligoni <= 0){
        printf("Dammi il numero di poligoni \n");
        scanf("%d", &poligoni);
    }
    for (int i = 1; i <= poligoni; i++)
    {
        while (nlati <= 0){
            printf("Dammi il numero di lati \n");
            scanf("%d", &nlati);
        }
        for (int o = 1; o <= nlati; o++)
        {
            while (lato <= 0){
                printf("Dammi il lato \n");
                scanf("%d", &lato);
            }
            perimetro = perimetro + lato;
            lato = 0;
        }
        printf("Il perimetro è: %d \n", perimetro);
        perimetro = 0;
        nlati = 0;
    }
    
}