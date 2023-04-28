#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../Librerias/pila.h"
#define DIM 4
#define ESC 27

/**
Hacer una función que reciba como parámetro un arreglo,
la cantidad de elementos (válidos) cargados en él y una Pila.
La función debe copiar los elementos del arreglo en la pila.
*/

void cargar_arreglo(int arreglo[DIM],int *validos);
void arr_pila(int arreglo[DIM], Pila *p,int validos);
int main()
{
    system("COLOR B");
    Pila p;
    inicpila(&p);

    int arr[DIM],validos=0;
    cargar_arreglo(arr,&validos);
    arr_pila(arr,&p,validos);
mostrar(&p);

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

void arr_pila(int arreglo[DIM], Pila *p,int validos){

int i=0;

while(i<validos){
    apilar(p,arreglo[i]);

    i++;
}



}



