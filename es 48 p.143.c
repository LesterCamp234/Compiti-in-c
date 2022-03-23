 #include <stdio.h>
 #include <stdlib.h>

 int main(){
     int gelato, gelato1, gelato2;
     float costo;
     printf("Dimmi i gusti dei gelati \n");
     scanf("%d%d%d", &gelato, &gelato1, &gelato2);
     switch (gelato)
     {
     case 1:
         costo = 1.2;
         break;
    
     case 2:
         costo = 2.0;
         break;
     
     case 3:
         costo = 2.5;
         break;
     }
     switch (gelato1)
     {
     case 1:
         costo = costo + 1.2;
         break;
    
     case 2:
         costo = costo + 2.0;
         break;
     
     case 3:
         costo = costo + 2.5;
         break;
     }
     switch (gelato2)
     {
     case 1:
         costo = costo + 1.2;
         break;
    
     case 2:
         costo = costo + 2.0;
         break;
     
     case 3:
         costo = costo + 2.5;
         break;
     }
    printf("Devi pagare: %f", costo);
 }