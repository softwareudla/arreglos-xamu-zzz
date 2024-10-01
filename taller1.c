#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombres[4][20];

    for (int i = 0; i < 4; i++)
    {
        printf("ingrese el nombre del estudiante%d", i);
        //scanf("%s", &nombres[i]);
        fgets(nombres[i],20,stdin);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s", nombres[i]);
    }
    
    char asig[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el nombre de la materia %d", i);
        //scanf("%s", &nombres[i]);
        fgets(asig[i],20,stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s", asig[i]);
    }

    
    return 0;
}