#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, x;
    do
    {
        printf("Dammi N \n");
        scanf("%d", &n);
    } while (n < 0);
    int vettore[n];

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Dammi X \n");
            scanf("%d", &x);
        } while (x < 0);
        
        vettore[i] = x;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vettore[j] == vettore [i] && i != j) {
                vettore[j] = 0;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("Vettore completo e' : %d \n \n", vettore[i]);
    }
    
    
    
}