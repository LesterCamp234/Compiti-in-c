#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n, poli = 0;
    do
    {
        printf("Dammi N \n");
        scanf("%d", &n);
    } while (n < 0);

    int vettore[n], vettoreb[n];

    for (int i = 0; i < n; i++)
    {
        vettore[i] = rand() % 10 +1;
        vettoreb[(n-1)-i] = vettore[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        if (vettore[j] == vettoreb[j])
        {
            poli++;
        } 
           
    }

    if (poli == n)
    {
        printf("E' polindromo \n");
    } else
    {
        printf("Non e' polindromo \n");
    }
}