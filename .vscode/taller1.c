#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombre[4][20];

    for (int i = 0; i < 4; i++)
    {
        printf("ingrese el nombre del estudiante%d", i);
        //scanf("%s", &nombres[i]);
        fgets(nombre[i],20,stdin);
    }
    
    char asig[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el nombre de la materia %d", i);
        //scanf("%s", &nombres[i]);
        fgets(asig[i],20,stdin);
    }

   for (int i = 0; i < 4; i++)
    {
        printf("notas del estudiante: %s en %s en %s en %s", nombre[i], asig[0],asig[1],asig[2]);
    }
    
     //imprime
    for (int i = 0; i < 4; i++) 
    {
       
        printf("notas del estudiante: %s en %s=  en %d en %s", nombre[i], asig[1], nota[i], asig[2],asig[3]);
    }
    
float maxA[6][3], maxE[6][3];
    float minA[6][3], minE[6][3];
    float promA[6][3];
    float promE[6][3];

    
    return 0;
}