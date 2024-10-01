#include <stdio.h>

int main (int argc, char *argv[]) {
    //nombres
    char nombre[4][20];

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese el nombre del estudiante", i);
        //scanf("%s", &nombres[i]);
        fgets(nombre[i],20,stdin);
    }
    //asignatura
    char asig[3][20];

    for (int j = 0; j < 3; j++)
    {
        printf("ingrese el nombre de la materia %d", j);
        //scanf("%s", &nombres[i]);
        fgets(asig[j],20,stdin);
    }

    //nota
    double nota[4][3];
    for(int k=0; k<5; k++){
        printf("Ingrese la calificación de N.%d %s: ", k,nombre[i]);
        scanf("%lf",&nota[k][l]);
    }

    double max=0, min=10, prom=0;

    for(int k=0; k<6; k++){
        if(nota[k][l] > max){
            max = nota[k][l];
        }
        if(nota[k][l] < min){
            min = nota[k][l];
        }
        prom+=nota[k][l];
    }
    prom/=6;
    
    //imprime
    for (int i = 0; i < 4; i++)
    {
        printf("notas del estudiante: %s en %s en %s en %s", nombre[i], asig[0],asig[1],asig[2]);
    }
    
    
    return 0;
}