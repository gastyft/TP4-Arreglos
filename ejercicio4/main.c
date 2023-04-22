#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define DIM 4
#define ESC 27

/**
Hacer una función que reciba como parámetro un arreglo,
la cantidad de elementos (válidos) cargados en él y una Pila.
La función debe copiar los elementos del arreglo en la pila.
*/

void cargar_arreglo(int arreglo[DIM],int *validos);

int main()
{
    system("COLOR B");
    int arr[DIM],validos=0;
    cargar_arreglo(arr,&validos);
    printf("Validos son %d",validos);

    return 0;
}

void cargar_arreglo(int arreglo[DIM],int *validos)
{

    int num,i=0;
    char o=0;

    while( o!=27  &&  i<DIM )
    {
        printf("Ingrese numero en posicion %d \n\t",i);
        scanf("%d",&num);
        arreglo[i]=num;

        printf("Si desea continuar presione cualquier tecla sino ESC para salir \n");
        fflush(stdin);
        o=getch();
        i++;
    }
    *validos=i;
}
