 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto5 = 0, min = 0;
    printf("Dammi i voti \n");
    scanf("%d%d%d%d%d", &voto1, &voto2, &voto3, &voto4, &voto5); // Potevo fare richiedere un numero in input a volta, ma ho preferito farlo così, poichè è più ottimizzato così.
    min = voto1; 
    if (min > voto2)
    {
        min = voto2;
    }
    if (min > voto3){
        min = voto3;
    }
    if (min > voto4){
        min = voto4;
    }
    if (min > voto5){
        min = voto5;
    }
    printf("Il voto più basso è:  %d", min); // Il %d è obbligatorio se vuoi avere un numero nell'output
    return 0;
 }
