#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define DIM 4
/**
Hacer una función que reciba como parámetro un arreglo
y la cantidad de elementos (válidos) cargados en él y calcule la suma de sus elementos.
*/
void cargar_arreglo(int arreglo[DIM],int validos);
int suma(int arreglo[DIM], int validos);

int main()
{

    system("COLOR B");
    int validos,arr[DIM];
    validos= DIM;

cargar_arreglo(arr,validos);
printf("La suma de los elementos del arreglo es: suma= %d",suma(arr,validos));

    return 0;
}

void cargar_arreglo(int arreglo[DIM],int validos)
{
    int i=0,num;
    while(i<DIM)
    {
        printf("Ingrese dato en posicion %d\n",i);
        scanf("%d",&num);
        arreglo[i]=num;
        i++;
    }

}
int suma(int arreglo[DIM],int validos){

int i=0,suma=0;
while(i<validos){

suma+=arreglo[i];




    i++;
}
return suma;
}
