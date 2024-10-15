#include <stdio.h>

char nombre[5][20];
char asig[3][20];
float nota[5][3];
float maxA[3];     
float maxE[5];       
float minA[3];        
float minE[5];        
float promA[3];       
float promE[5]; 
    
int main () {
    //estudiante
    for (int i = 0; i < 5; i++){
        printf("ingrese el nombre del estudiante:\n", i);
        //scanf("%s", &nombres[i]);
        fgets(nombre[i],20,stdin);
    }

    //asignatura
    for (int j = 0; j < 3; j++){
        printf("ingrese el nombre de la materia:\n", j);
        //scanf("%s", &nombres[i]);
        fgets(asig[j],20,stdin);
    }

    //notas
    for (int i = 0; i < 5; i++) {
        printf("Estudiante %s",nombre[i]);
        for (int j = 0; j < 3; j++) {
            do {
                printf(" Calificacion en %s",asig[j]);
                scanf("%f", &nota[i][j]);
                if (nota[i][j] < 0 || nota[i][j] > 10) {
                    printf("Por favor ingrese un valor entre 0 y 10.\n");
                }
            }while (nota[i][j] < 0 || nota[i][j] > 10);
        }
    }

    //ESTUDIANTE 
////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Calcular promedio, max y min por estudiante
    for (int i = 0; i < 5; i++) {
        float suma = 0;
        maxE[i] = nota[i][0];
        minE[i] = nota[i][0];

        for (int j = 0; j < 3; j++) {
            suma += nota[i][j];
            if (nota[i][j] > maxE[i]) maxE[i] = nota[i][j];
            if (nota[i][j] < minE[i]) minE[i] = nota[i][j];
        }
        promE[i] = suma / 3.0;
    }

    //ASIGNATURA
///////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int j = 0; j < 3; j++) {
        float suma = 0;
        int aprobado = 0;
        int reprobado = 0;
        maxA[j] = nota[0][j];
        minA[j] = nota[0][j];

        for (int i = 0; i < 5; i++) {
            suma += nota[i][j];
            if (nota[i][j] > maxA[j]) maxA[j] = nota[i][j];
            if (nota[i][j] < minA[j]) minA[j] = nota[i][j];
            
            if (nota[i][j] >= 6) {
                aprobado++;
            } else {
                reprobado++;
            }
        }  
        promA[j] = suma / 5.0;

        printf("\nAsignatura %s", asig[j]);
        printf("  Promedio: %.2f\n", promA[j]);  
        printf("  Calificacion mas alta: %.2f\n", maxA[j]);
        printf("  Calificacion mas baja: %.2f\n", minA[j]);
        printf("  Aprobados: %d", aprobado);
        printf("  Reprobados: %d", reprobado);
    }

    // Resultados
    for (int i = 0; i < 5; i++) {
        printf("\nEstudiante %s", nombre[i] );
        printf("  Promedio: %.2f\n", promE[i]);               // promedio estudiante cada 
        printf("  Calificacion mas alta: %.2f\n", maxE[i]);
        printf("  Calificacion mas baja: %.2f\n", minE[i]);
    }   

    return 0;
}

