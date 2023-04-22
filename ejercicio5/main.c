#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 27
#define DIM 100

/**
Realizar una funci�n que sume los elementos de un arreglo de n�meros reales (float) de dimensi�n 100.
(se recomienda hacer una funci�n para cargar y otra para mostrar para este tipo de dato asociado al arreglo)
*/

void cargar_arreglo(float arreglo[DIM], int *validos);
float suma(float arreglo[DIM],int validos);
int main()
{
    system("COLOR B");
    int validos;
    float arr[DIM];
    cargar_arreglo(arr,&validos);

    printf("La sumaa es %.2f \n",suma(arr,validos));

    return 0;
}

void cargar_arreglo(float arreglo[DIM], int *validos)
{
    char o=0;
    int i=0;
    float num;
    while(o!=ESC && i<DIM )
    {
        printf("Ingrese numero en posicion %d \n\t",i);
        scanf("%f",&num);
        arreglo[i]=num;
        printf("Presione cualquier tecla para continuar o ESCAPE para salir \n");
        fflush(stdin);
        o=getch();
        i++;
    }
    *validos=i;
}

float suma(float arreglo[DIM],int validos){
    float suma=0.0;

    for(int i=0;i<validos;i++){

        suma+=arreglo[i];
    }

return suma;
}
